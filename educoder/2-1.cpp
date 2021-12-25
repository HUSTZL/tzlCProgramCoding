#include <stdio.h>

int main () {
	char s[1000];int top=0;int flag = 0;
	while(s[top - 1]!='!' || top == 0) {
		char now = getchar();	
		if(now == ' ') {
			if(flag) 
				continue;
			else {
				flag = 1;
				s[top++] = now;
			}
		}
		else {
			s[top++] = now;		
			if(flag)
				flag = 0;	
		}
	}
	s[top] = 0;
	printf("%s",s);
	return 0;
} 
