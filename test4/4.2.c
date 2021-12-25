/*
用条件编译方法来编写程序。输入一行英文字符序列，可以任选两种方式之一输出：
一为原文输出；二为变换字母的大小写后输出。例如小写‘a’变成大写‘A’，大写‘D’变成小写‘d’，其他字符不变。
用#define命令控制是否变换字母的大小写。例如，#define CHANGE 1 则输出变换后的文字，
若#define CHANGE 0则原文输出。
*/

#include <stdio.h>
#define CHANGE 1
int main () {
    char str[10000];
    gets(str);
    #if CHANGE == 0
        printf("%s", str);
    #elif CHANGE == 1
        for(int i = 0; str[i]; i++) {
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 'a' + 'A';
            else if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] - 'A' + 'a'; 
        }
        printf("%s", str);
    #endif
    return 0;
}