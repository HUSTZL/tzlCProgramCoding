#include <stdio.h>
char bit[1000];
int main() {
	long long x;
	scanf("%d", &x);
	char * p = bit;
	for(int i = 0; i < 8; i++) {
		int now = x % 16;
		if(now <= 9) 
			*p = '0' + now;
		else 
			*p = 'A' + now - 10;
		p = p + 1;
		x = x / 16;
	}
	*p = 0;
	p = bit + 7;
	for(int i = 4; i >= 0; i--)
		printf("%c", *p--);
	for(int i = 4; i >= 0; i--)
		printf("%c", *p--);
	return 0;
} 
