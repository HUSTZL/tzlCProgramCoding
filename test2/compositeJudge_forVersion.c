/* 实验2-1改错题程序：合数判断器*/
#include <stdio.h>
#include <math.h>
int main() {
    int i, x, k, flag = 0;
    printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
    while (scanf("%d", &x) != EOF) {
        flag = 0;//需添加，否则出现一次合数，之后都是合数
        for (i = 2, k = (int)sqrt(x); i <= k; i++)//k = x >> 1 相比减少了运算时间
            if (!(x % i)) {//!运算优先级高
                flag = 1;
                break;
            }
        if (flag == 1)//if (flag = 1)
            printf("%d是合数\n", x);//printf("%d是合数", x);
        else
            printf("%d不是合数\n", x);//printf("%d不是合数", x);
    }
    return 0;
}
