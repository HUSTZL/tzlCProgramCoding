#include<stdio.h>
#define M 10
#define N 3
int main(void)
{
    int c[M], b[M];
    int i, j, k;
    for(i = 0; i < M; i++) 
        c[i] = 1;
    for(i = M, j = 0; i > 1; i--){
        for(k = 1; k <= N; k++)	{/* 1至N报数 */
            j = (j + 1) % M;
            while(c[j] == 0) {
                j = (j + 1) % M;
            }
        }	
        c[j] = 0;
        b[M-i] = j? j:M;
    }
    for(i = 0;i < M-1; i++)		    /* 按次序输出出圈人的编号 */
        printf("%d\n", b[i]);
    for(i = 0;i < M; i++)
        if(c[i])
            printf("%d\n",i? i: M);
    return 0;
}	
