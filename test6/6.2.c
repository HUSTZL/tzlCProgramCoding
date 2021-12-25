#include <stdio.h>
void RotateLeft90(int (*a)[200], int* n, int* m) {
    int b[200][200];
    for(int i = 1; i <= *n; i++)
		for(int j = 1; j <= *m; j++) 
            b[*m - j + 1][i] = a[i][j];	
    int temp = *n;
    *n = *m;
    *m = temp;
    for(int i = 1; i <= *n; i++)
        for(int j = 1; j <= *m; j++)
            a[i][j] = b[i][j];
}
int main () {
	int n, m;int a[200][200];
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++) 
			scanf("%d",&a[i][j]);
    RotateLeft90(a, &n, &m);
	for(int i = 1; i <= n; i++) 
		for(int j = 1; j <= m; j++)
			printf("%d%s",a[i][j],j == m? "\n":" ");
	return 0;
}