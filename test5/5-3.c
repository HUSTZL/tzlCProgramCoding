#include <stdio.h>
int N, tot, row[100], lex[100], rex[100];
int maplex[100][100], maprex[100][100];
void pre () {
	int count = 0;
	for(int i = 1; i <= N; i++) {
		count ++;
		for(int j = 1; j <= i; j++)
			maplex[j][N-i+j] = count;	
	}
	for(int i = 2; i <= N; i++) {
		count ++;
		for(int j = 1; j <= N - i + 1; j++)
			maplex[i+j-1][j] = count;
	}
	for(int i = 1; i <= N; i++) 
		for(int j = 1; j <= N; j++)
			maprex[i][j] = maplex[i][N-j+1];
}
void dfs (int n) {
	if(n == N + 1) {
		tot ++;
		return ;
	}
	for(int j = 1; j <= N; j ++) {
		if((!row[j]) && (!lex[maplex[n][j]]) && (!rex[maprex[n][j]])) {
			row[j] = lex[maplex[n][j]] = rex[maprex[n][j]] = 1;
			dfs(n+1);
			row[j] = lex[maplex[n][j]] = rex[maprex[n][j]] = 0;
		}
	}
}
int main () {
	scanf("%d", &N);
	pre();
	dfs(1);
	if(tot == 0)
		printf("无解");
	else
		printf("%d\n", tot);
	return 0;
}