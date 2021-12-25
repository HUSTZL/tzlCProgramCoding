#include <stdio.h>
#include <stdlib.h>//导入新的库
char *strcopy(char *, const char *);
int main(void)
{
	char *s1, *s2, *s3;
    s1 = (char *)malloc(sizeof(char) * 100);//分配内存.
    s2 = (char *)malloc(sizeof(char) * 100);
    s3 = (char *)malloc(sizeof(char) * 100);
	printf("Input a string:\n", s2);
	scanf("%s", s2);
	strcopy(s1, s2);
	printf("%s\n", s1);
	printf("Input a string again:\n", s2);
	scanf("%s", s2);
	s3 = strcopy(s1, s2);
	printf("%s\n", s3);
	return 0;
}

/*将字符串s复制给字符串t，并且返回串t的首地址*/
char * strcopy(char *t, const char *s)
{
	char *p = t;//不修改t，修改p
    while(*p++ = *s++);
    *p++ = '\0';//终止符
	return (t);
}
