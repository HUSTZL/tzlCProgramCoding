#include<stdio.h>
int main() {
	unsigned short x,m,n;
	//printf("����x��16���ƣ���m��0~15����n��1~16-m����\n ");
	scanf("%hx%hd%hd",&x,&m,&n);
	if ( 0 <= m && m <= 15 && 1 <= n && n <= 16-m )  /*�ж�m��n��ֵ�Ƿ��ں���Χ��*/
 		printf("%hx\n",(x >> m) << (16 - n));
	else   printf("error\n"); 
}

