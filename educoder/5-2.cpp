#include <stdio.h>
#include <string.h>
char Name[1000][1000];int Score[1000];int n;int sorted = 0;
void sort() {
	for(int i = 1; i < n; i++) 
		for(int j = 1; j <= n - i; j++) {
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
	sorted = 1;
}
int main () {
	int opt;
	while(scanf("%d", &opt) != EOF) {
		if(opt == 0)
			break;
		else if(opt == 1) {
			sorted = 0;
			scanf("%d", &n);
			for(int i = 1; i <= n; i++)
				scanf("%s%d",Name[i], &Score[i]);
			printf("%d records were input!\n",n);
		} 
		else if(opt == 2) {
			sort();
			printf("Reorder finished!\n");	
		}
		else if(opt == 3) {
			for(int i = 1; i <= n; i++) 
				printf("%s %d\n",Name[i],Score[i]);
		}
		else if(opt == 4) {
			if(sorted == 0)
				sort();
			int x = 0;
			scanf("%d", &x);
			int L = 1, R = n, mid, ans = n + 1;
			while(L <= R) {
				//printf("%d %d %d\n", L, R, mid);
				mid = (L + R) >> 1;
				if(Score[mid] >= x) {
					ans = mid;
					L = mid + 1;
				}
				else 
					R = mid - 1;
			}
			if(ans == n + 1 || Score[ans] != x) 
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
	}
	return 0;
}
