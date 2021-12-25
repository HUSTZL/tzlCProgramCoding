#include <stdio.h>
#include <math.h>

int primeCheck (int n) {
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}
void mathCheck (int n) {
	for(int i = 2; i < n; i++) 
		if(primeCheck(i) && primeCheck(n - i)) {
			printf("%d=%d+%d\n",n, i, n-i);
			return ;
		}

}
int main () {
	int x;
	while(scanf("%d",&x) != EOF) 
		if(x >= 4 && x % 2 == 0) 
			mathCheck(x);
	return 0;
}
