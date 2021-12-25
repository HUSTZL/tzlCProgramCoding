#include <stdio.h>
#include <math.h>
#define s(a,b,c) ((a+b+c) / 2.0)
#define area(a,b,c) sqrt(s(a,b,c) * (s(a,b,c) - a) * (s(a,b,c) - b) * (s(a,b,c) - c))
int main () {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a)
        printf("S = %f\n", area(a, b, c));
    else 
        printf("can not from a triangle\n");
    return 0;
}