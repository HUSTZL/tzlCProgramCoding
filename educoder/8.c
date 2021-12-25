#include <stdio.h>
#include <string.h>
char s[100000], temp[10000], ans[100000];char a[1000], b[1000];
int main () {
	FILE *fp = fopen("source.txt", "r");
	s[0] = '\0';
	while(fgets(temp, sizeof(temp), fp) != NULL) 
		strcat(s, temp);
	scanf("%s %s", a, b);
	int lens = strlen(s), lena = strlen(a), lenb = strlen(b), tot = 0, pos = 0;
	for(int i = 0; i < lens; i++) {
		int checkSame = 1;
		if(i+lena-1 >= lens)
			checkSame = 0;
		else 
			for(int j = 0; j < lena && i+j < lens; j++)
				if(s[i+j] != a[j]) {
					checkSame = 0;
					break;
				}
		if(checkSame) {
			tot++;
			i = i + lena - 1;
			for(int j = 0; j < lenb; j++)
				ans[pos++] = b[j];
		}
		else 
			ans[pos++] = s[i];
	}
	ans[pos] = 0;
	printf("%d\n", tot);
    printf("%s\n", ans);
	return 0;
}
