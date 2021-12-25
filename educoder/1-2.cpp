#include<stdio.h>
int main() {
	unsigned short x,m,n;
	//printf("输入x（16进制）、m（0~15）和n（1~16-m）：\n ");
	scanf("%hx%hd%hd",&x,&m,&n);
	if ( 0 <= m && m <= 15 && 1 <= n && n <= 16-m )  /*判断m、n的值是否在合理范围内*/
 		printf("%hx\n",(x >> m) << (16 - n));
	else   printf("error\n"); 
}

