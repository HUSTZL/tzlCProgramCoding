#include <stdio.h>
int main () {
	int N;
	scanf("%d", &N);
	for(int i = 0; i<= N; i++) {
		for(int j = 1; j <= i; j++) 
			printf(" ");
		for(int j = 1; j <= 3 * (N - i); j++)
			printf(" ");
		int Cnow = 1;
		printf("%d   ",Cnow);
		for(int j = 1; j <= i; j++) {
			Cnow = Cnow * (i-j+1) / j;
			printf("%d",Cnow);
			if(Cnow < 10)		printf("   ");
			else if(Cnow < 100)	printf("  ");
			else 				printf(" ");
		}
		printf("\n");
	}
	return 0;
} 
