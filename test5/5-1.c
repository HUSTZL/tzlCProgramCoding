#include <stdio.h>
char s[100];
int main () {
	unsigned int x;
	scanf("%u",&x);
	for(int i = 1; i <= 32; i++) {
		s[32 - i] = '0' + (x & 1);
		x >>= 1;
	}
	s[32] = 0;
	printf("%s\n",s);
	return 0;
}