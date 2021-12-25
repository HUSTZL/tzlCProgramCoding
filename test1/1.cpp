#include <stdio.h>
void print2bit (unsigned long long x) {
	unsigned long long s[100], top = 0;
	while(x) {
		s[top++] = x%2;
		x /= 2;
	}
	for(int i = top-1; i>=0; i--)
		printf("%lld",s[i]);
	printf("\n");
} 
int main () {
	unsigned long long x = 0;
	while(scanf("%lld",&x) != EOF) {
		unsigned long long opt = (1 << 8) - 1;
		unsigned long long ans[4];
		for(int i = 0; i < 4; i++) {
			ans[i] = x & opt;
			x >>= 8;
		}
		for(int i = 3; i >= 1; i--)
			printf("%lld.",ans[i]);
		printf("%lld\n",ans[0]); 
	}
	return 0;
}
