#include <stdio.h>
int a[2000][2000],b[2000][2000];
int main () {
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++) {
			scanf("%d",&a[i][j]);	
			b[m - j + 1][i] = a[i][j];		
		}
	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++)
			printf("%d%s",b[i][j],j == n? "\n":" ");
	}
	return 0;
}
