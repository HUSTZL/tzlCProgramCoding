/*实验3-1改错题程序中sum_fac函数修改为一个递归函数，用递归的方式*/
#include <stdio.h>
long long sum_fac(int );
int main(void)
{
    int k;
    for(k=1;k<=20;k++)
        printf("k=%d\tthe sum is %lld\n",k,sum_fac(k));
    return 0;
}
long long sum_fac(int n)
{
    if(n == 0)
        return 0LL;
    long long i, fac = 1;
    for(i=1;i<=n;i++) 
        fac*=i;
    return sum_fac(n-1) + fac;
}
