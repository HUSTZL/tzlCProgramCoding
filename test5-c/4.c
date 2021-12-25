#include <stdio.h>
#include <string.h>
void input(char name[][100], int score[100], int*);
void sort(char name[][100], int score[100], int*);
void output(char name[][100], int score[100], int*);
void find(char name[][100], int score[100], int*);
int main(void) {
	int n = 1, score[100] = { 0 }, k = 0;
	char name[100][100];
	while ((scanf("%d", &n)) != EOF) {
		switch (n)
		{
		case 0:return 0;
		case 1:input(name, score, &k); break;
		case 2:sort(name, score, &k); break;
		case 3:output(name, score, &k); break;
		case 4:find(name, score, &k); break;
		}
	}
	//printf("（程序退出）\n");
	return 0;
}

void input(char name[][100], int score[100], int* k) {
	scanf("%d", k);
	for (int i = 0; i < *k; i++) {
		scanf("%s", name[i]);
		scanf("%d", &score[i]);
	}
	printf("%d records were input!\n", *k);
}

void sort(char name[][100], int score[100], int* k) {
	for (int i = 0; i < *k - 1; i++) {
		for (int j = 0; j < *k - i - 1; j++) {
			if (score[j] < score[j + 1]) {
				int temp = score[j];
				score[j] = score[j + 1];
				score[j + 1] = temp;
				char temp1[100] = { 0 };
				strcpy(temp1, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], temp1);
			}
		}
	}
	printf("Reorder finished!\n");
}

void output(char name[][100], int score[100], int* k) {
	for (int i = 0; i < *k; i++)
		printf("%s %d\n", name[i], score[i]);
}

void find(char name[][100], int score[100], int* k) {
	//sort(name, score, k);
	int low = 0, high = *k - 1, mid=0,s;
	scanf("%d", &s);
	while (low <= high) {
		mid = (low + high) / 2;
		if (score[mid] > s)low = mid + 1;
		else if (score[mid] == s) { printf("%s %d\n", name[mid], score[mid]); break; }
		else high = mid - 1;
	}
	if(score[mid]!=s) printf("not found!\n");
}
