#include <stdio.h>
void print2bit (int x) {
	int s[100], top = 0;
	while(x) {
		s[top++] = x%2;
		x /= 2;
	}
	for(int i = top-1; i>=0; i--)
		printf("%d",s[i]);
	printf("\n");
} 
 int main () {
    int  x, m, n;
    scanf("%x%d%d",&x,&m,&n);
    if(!(m >= 0 && m <= 15 && m+n>=0 && m+n <= 15)) {
        printf("error\n");       
        return 0; 
    }
    //printf("x:");print2bit(x);
    //printf("temp");print2bit((((1 << (m + n + 1)) - 1) >> (m + 1)) << (m));
    int temp = (((1 << (m + n + 1)) - 1) >> (m + 1)) << (m);
    x = x & temp;
    //printf("x:");print2bit(x);
    x = x << (16 - m - n);
    //printf("x:");print2bit(x);
    printf("%x",x);
    return 0;
 }
 
