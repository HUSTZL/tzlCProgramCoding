#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void ClearSpace(char **a, int len) {
    char *b;int num = 0;int isFirst = 1;
    b = (char*)malloc((len+1)*sizeof(char));
    for(int i = 0; i < len; i++) {
        if(isFirst && (*a)[i] != ' ' && (*a)[i] != '\t') {
            b[num++] = (*a)[i];
            isFirst = 0;
        }
        else if(!isFirst && (*a)[i] != '\t') 
            b[num++] = (*a)[i];
    }
    b[num++] = '\0';
    *a = b;
}
int main () {
	int num = 0;
    char *s[1000];
	while(1) {
        char str[100];
        if(gets(str) == NULL) 
            break;
        int len = strlen(str);
        s[num] = (char*)malloc((len+1)*sizeof(char));
        strcpy(s[num], str);
        ClearSpace(&s[num], len);
        num++;
    }
    for(int i = 0; i < num; i++)
        printf("%s\n",s[i]);
	return 0;
}