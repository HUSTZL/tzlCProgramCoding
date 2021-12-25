/*实验4-1改错与跟踪调试题程序：计算平方差、将换两数*/ 
#include<stdio.h>
#define SUM (a+b)//#define SUM a+b
#define DIF (a-b)//#define DIF a-b
#define SWAP(a,b)  a=b-a,b=b-a,a=a+b//#define SWAP(a,b)  a=b,b=a
int main() 
{
    int a,b;
    printf("Input two integers a, b:");
    scanf("%d%d", &a,&b);
    printf("\nSUM=%d\nthe difference between square of a and square of b is:%d",SUM, SUM*DIF);
    SWAP(a,b);
    printf("\nNow a=%d,b=%d\n",a,b);
    return 0;
}
