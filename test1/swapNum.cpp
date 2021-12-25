#include<stdio.h>
int main()
{
   int a, b;
   printf("Input two integers:");
   scanf("%d %d",&a,&b);
   a=b-a ;b=b-a;a=a+b;
   printf("\na=%d,b=%d",a,b);
}
