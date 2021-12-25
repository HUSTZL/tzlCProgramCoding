#include <stdio.h>
char s[1000000][100],t[1000000][100];
int main () {
	int num = 0;
	while(gets(s[num++]) != NULL);num--;
	char (*p)[100] = s;
	char (*q)[100] = t;
	for(int i = 0; i < num; i++) {
		int now = 0, tot = 0;int isFirst = 1;
		while(*((*p) + now) != 0) {
			if(isFirst && *((*p) + now) != ' ' && *((*p) + now) != '\t') {
				*((*q) + tot) = *((*p) + now);	
				tot ++;		
				isFirst = 0;	
			}
			else if(!isFirst && *((*p) + now) != '\t') {
				*((*q) + tot) = *((*p) + now);	
				tot ++;					
			}
			now ++;
		}
		*((*q) + tot) = 0;
		//printf("%s\n", (*q));
		p = p + 1; q = q + 1;
	} 
	q = t;
	for(int i = 0; i < num-1; i++)
		printf("%s\n", q[i]);
	printf("%s", q[num-1]);
	return 0;
}
