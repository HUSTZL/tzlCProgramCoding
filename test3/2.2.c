/*实验3-2程序修改替换第(2)题程序：根据公式计算 s*/
#include<stdio.h>
double mulx(double x,int n);
long long fac(int n);
double sum(double x,int n)
{
	int i;
	double z=1.0;
	for(i=1;i<=n;i++)
	{
		z=z+mulx(x,i)/fac(i);
	}
	return z;
} 
double mulx(double x,int n)
{
	static double z=1.0;
    z = z * x;
	return z;
 } 
long long fac(int n)
{
 	static long long h=1;
    h = h *(long long)n;
	return h; 	
}
int main()
{
 	double x;
	int n;
	printf("Input x and n:");
	scanf("%lf%d",&x,&n);
	printf("The result is %lf:",sum(x,n));
	return 0;	  
}
