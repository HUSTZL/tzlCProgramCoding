#include<stdio.h>
#define PI 3.14159//#define PI 3.14159;
int main( void )
{
	int f ;
	unsigned short p, k ;//short p, k ;
	double c, r, s ;
/* ����1 */
	printf("Input Fahrenheit: " ) ;
	scanf("%d", &f ) ;//scanf("%d", f ) ;
	c = 5.0 / 9.0 * (f-32); //c = 5/9 * (f-32) ;
	printf( " \n %d (F) = %.2f (C)\n\n ", f, c ) ;
/* ����2 */
	printf("input the radius r:");
	scanf("%lf", &r);//scanf("%f", &r);
	s = PI * r * r;
	printf("\nThe acreage is %.2f\n\n", s);//printf("\nThe acreage is %.2f\n\n",&s);
/* ����3 */
	scanf("%x%x",&k, &p);
	unsigned short newint = (p&0xff00)|(k>>8);//newint = p&0xff00|k>>8;
	printf("new int = %#x\n\n",newint);
	return 0;
}
