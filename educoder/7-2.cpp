 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node {
	int id; char Name[1000]; int a, b, c, d, sum;double ave;
	struct Node *next;
};
void swap1 (int *a,int *b) {
	int temp = *a; *a = *b; *b = temp;
}
void swap2 (double *a,double *b) {
	double temp = *a; *a = *b; *b = temp;
}
void swap3 (char *a,char *b) {
	char c[1000];
	memcpy(c, a, sizeof(a));
	memcpy(a, b, sizeof(b));
	memcpy(b, c, sizeof(c));
}
int main () {
	struct Node* S = (struct Node*) malloc(sizeof(struct Node));	
	int N;
	S->id = S->a = S->b = S->c = S->d = 0; (S->Name)[0] = 0;
	S->next = NULL;
	int opt;
	while(scanf("%d", &opt) != EOF) {
		if(opt == 0) {
			//printf("（退出）\n");
			break;
		}
		else if(opt == 1) {
			scanf("%d", &N);
			struct Node *p = S; 
			for(int i = 1; i <= N; i++) {
				struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));	 
				scanf("%d%s%d%d%d%d", &newNode->id, newNode->Name, &newNode->a, &newNode->b, &newNode->c, &newNode->d);
				p->next = newNode;
				newNode->next = NULL;
				p = newNode;		
				p->sum = p->a + p->b + p->c + p->d;
				p->ave = p->sum/4.0;		
			}
			printf("完成了%d位同学的成绩输入。\n", N);
		} 
		else if(opt == 2) {
			struct Node *p = S->next; 
			while(p != NULL) {	 
				printf("%d %s %d %d %d %d\n", p->id, p->Name, p->a, p->b, p->c, p->d);
				p = p->next;				
			}			
		}
		else if(opt == 3) {
			int id, waitChange;
			scanf("%d%d",&id, &waitChange);
			struct Node *p = S->next; 
			while(p != NULL) {	 
				//printf("%d %s %d %d %d %d\n", p->id, p->Name, p->a, p->b, p->c, p->d);
				if(p->id == id) {
					if(waitChange == 0) {
						char newName[100];
						scanf("%s",newName);
						memcpy(p->Name, newName, sizeof(newName)); 
					}
					else if(waitChange == 1) {
						int A;scanf("%d", &A);p->a = A;
					}
					else if(waitChange == 2) {
						int B;scanf("%d", &B);p->b = B;
					}
					else if(waitChange == 3) {
						int C;scanf("%d", &C);p->c = C; 
					}
					else if(waitChange == 4) {
						int D;scanf("%d", &D);p->d = D;
					}
					p->sum = p->a + p->b + p->c + p->d;
					p->ave = p->sum/4.0;
					printf("%d %s %d %d %d %d\n", p->id, p->Name, p->a, p->b, p->c, p->d);
					break;
				}
				p = p->next;				
			}		
		}
		else if(opt == 4) {
			//double sum = 0;
			struct Node *p = S->next;
			while(p != NULL) {
				int sum = 0;
				sum = p->a + p->b + p->c + p->d;
				p->sum = sum;
				p->ave = sum/4.0;
				printf("%d %s %0.2lf\n", p->id, p->Name, sum/4.0);
				p = p->next;	
			}
		}
		else if(opt == 5) {
			struct Node *p = S->next;
			while(p != NULL) {
				printf("%d %s %d %0.2lf\n", p->id, p->Name, p->sum, p->ave);
				p = p->next;
			}
		}		
		else if(opt == 6) {
			for(int i = 1; i <= N; i++) {
				struct Node *p = S->next;
				for(int j = 1; j <= N-i ;j++) {
					if((p->sum) > (p->next->sum)) {
						swap1(&p->id, &p->next->id);
						swap3(p->Name, p->next->Name);
						swap1(&p->a, &p->next->a);
						swap1(&p->b, &p->next->b);
						swap1(&p->c, &p->next->c);
						swap1(&p->d, &p->next->d);
						swap1(&p->sum, &p->next->sum);
						swap2(&p->ave, &p->next->ave);
					}
					p = p->next;
				}				
			}
			struct Node *p = S->next; 
			while(p != NULL) {	 
				printf("%d %s %0.2lf\n", p->id, p->Name, p->ave);
				p = p->next;				
			}	
		}
	}
}
