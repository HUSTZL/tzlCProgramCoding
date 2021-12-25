/*salaryCalc_ifVersion*/
#include <stdio.h>

int main () {
    int x = 0; double tax = 0;
    scanf("%d", &x);
    if(x >= 5000) {
        tax += 0.25*(x - 4999);
        x = 4999;
    }
    if(x >= 4000) {
        tax += 0.2*(x - 3999);
        x = 3999;
    }
    if(x >= 3000) {
        tax += 0.15*(x - 2999);
        x = 2999;
    }
    if(x >= 2000) {
        tax += 0.1*(x - 1999);
        x = 1999;
    }
    if(x >= 1000) {
        tax += 0.05*(x - 999);
        x = 999;
    }
    printf("tax = %lf\n", tax);
    return 0;
}