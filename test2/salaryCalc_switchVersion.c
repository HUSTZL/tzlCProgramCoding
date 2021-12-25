#include <stdio.h>

int main () {
    int x = 0; double tax = 0;
    scanf("%d", &x);
    switch (x/1000) {
        default:
        case 5:tax += 0.25*(x - 4999);x = 4999;
        case 4:tax += 0.2*(x - 3999); x = 3999;
        case 3:tax += 0.15*(x - 2999);x = 2999;
        case 2:tax += 0.1*(x - 1999); x = 1999;
        case 1:tax += 0.05*(x - 999); x = 999;
        case 0: break;
    }
    printf("tax = %lf\n", tax);
    return 0;
}