#include <stdio.h>

int main () {
    long long a;
    char *p;
    scanf("%lld", &a);
    p = &a;
    p = p + 3;
    for(int i = 0; i < 4; i++) {
        char high = ((*p) >> 4) & 0x0f;
        if(high < 10)
            high = high + '0';
        else 
            high = high - 10 + 'A';
        char low = (*p) & 0x0f;
        if(low < 10)
            low = low + '0';
        else 
            low = low - 10 + 'A';
        printf("%c%c", high, low);
        p = p-1;
    }
    return 0;
}