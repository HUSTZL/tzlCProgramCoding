#include <stdio.h>
void task (int i) {
	printf("task%d is called!\n", i);
}
void scheduler(int *n, char *a) {
	scanf("%s",a);
	while(a[(*n)++] != 0); (*n)--;
}
void execute(int n,char *a) {
	for(int i = 0; i < n; i++) 
		task(a[i] - '0'); 
}
int main () {
	int n = 0; char a[10000];
	scheduler(&n, a);
	execute(n, a);
	return 0;
}
