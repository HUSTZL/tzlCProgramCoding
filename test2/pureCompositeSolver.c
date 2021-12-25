/* 实验2-1改错题程序：合数判断器*/
/* 程序修改替换：纯粹合数求解器 */
#include <stdio.h>
#include <math.h>
int main() {
    int i, x, k, flag = 0;
    printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
    for(int X = 100; X <= 999; X++) {
        x = X;
        int pureComFlag = 1;
        while(x) {
            flag = 0;
            for (i = 2, k = (int)sqrt(x); i <= k; i++)
                if (!(x % i)) {
                    flag = 1;
                    break;
                }       
            if(!flag) {
                pureComFlag = 0;
                break;
            }
            x = x/10;
        }
        if (pureComFlag == 1)
            printf("%d是纯粹合数\n", X);
    }
    return 0;
}
