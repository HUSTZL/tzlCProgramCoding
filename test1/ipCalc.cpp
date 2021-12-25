#include <stdio.h>
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
