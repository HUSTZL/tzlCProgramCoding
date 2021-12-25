#include <stdio.h>
#include <string.h>
void sort(char Name[][1000], int Score[],int *n, int *sorted) {
	for(int i = 1; i < (*n); i++) 
		for(int j = 1; j <= (*n) - i; j++) {
			if(Score[j] < Score[j+1]) {
				int temp = Score[j+1];
				Score[j+1] = Score[j];
				Score[j] = temp;
				char TEMP[1000];
				memcpy(TEMP, Name[j+1], sizeof(TEMP));
				memcpy(Name[j+1], Name[j], sizeof(TEMP));
				memcpy(Name[j], TEMP, sizeof(TEMP));
			}
		}
	(*sorted) = 1;
}
void input(char Name[][1000], int Score[],int *n, int *sorted) {
    *sorted = 0;
	scanf("%d", n);
	for(int i = 1; i <= *n; i++)
		scanf("%s%d",Name[i], &Score[i]);
	printf("%d records were input!\n",*n);
}
void Find(char Name[][1000], int Score[],int *n, int *sorted) {
    if(sorted == 0)
		sort(Name, Score, n, sorted);
	int x = 0;
	scanf("%d", &x);
	int L = 1, R = *n, mid, ans = *n + 1;
	while(L <= R) {
		mid = (L + R) >> 1;
		if(Score[mid] >= x) {
			ans = mid;
			L = mid + 1;
		}
		else 
			R = mid - 1;
	}
	if(ans == *n + 1 || Score[ans] != x) 
		printf("not found!\n");
	else {
		int tot = 0;
		for(int i = 1; i <= ans; i++)
			if(Score[ans - i + 1] == x) 
				tot ++;
		for(int i = ans - tot + 1; i <= ans; i++)
			printf("%s %d\n",Name[i], Score[i]);			
	}
}
void output(char Name[][1000], int Score[],int *n, int *sorted) {
    for(int i = 1; i <= *n; i++) 
		printf("%s %d\n",Name[i],Score[i]);
}
int main () {
	int opt;
    char Name[1000][1000];int Score[1000];int n;int sorted = 0;
	while(scanf("%d", &opt) != EOF) {
		if(opt == 0)
			break;
		else if(opt == 1) 
            input(Name, Score, &n, &sorted);
		else if(opt == 2) {
			sort(Name, Score, &n, &sorted);
			printf("Reorder finished!\n");	
		}
		else if(opt == 3) 
            output(Name, Score, &n, &sorted);
		else if(opt == 4) 
            Find(Name, Score, &n, &sorted);
	}
	return 0;
}