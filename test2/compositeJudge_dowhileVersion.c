/* 实验2-1改错题程序：合数判断器*/
/* 程序修改替换：改用dowhile循环 */
#include <stdio.h>
int main() {
    int i, x, k;
    printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
    while (scanf("%d", &x) != EOF) {
        i = 1; k = (int)sqrt(x);
        do {
            i++;
        }while((x % i) && i <= k);
        if (i != k+1)//if (flag = 1)
            printf("%d是合数\n", x);//printf("%d是合数", x);
        else
            printf("%d不是合数\n", x);//printf("%d不是合数", x);
    }
    return 0;
}
