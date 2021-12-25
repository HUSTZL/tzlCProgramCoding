/*实验3-1改错题程序：计算s=1!+2!+3!+…+n!*/
#include <stdio.h>
long long sum_fac(int );//需要声明
int main(void)
{
    int k;
    for(k=1;k<=20;k++)
        printf("k=%d\tthe sum is %lld\n",k,sum_fac(k));//printf("k=%d\tthe sum is %ld\n",k,sum_fac(k));
    return 0;
}
long long sum_fac(int n)//long sum_fac(int n)
{
    long long s = 0;//long s=0;
    long long i, fac = 1;//int i,fac;
    for(i=1;i<=n;i++) {
        fac*=i;
        s+=fac; //挪进来
    }
    return s;
}
