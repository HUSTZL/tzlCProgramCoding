#include <stdio.h>
char Name[100][100] = {"", "", "", "水仙花数", "四叶玫瑰数", "五角星数", "六合数", "北斗星数", "八仙数"};
int pow (int a,int b) {
	int ans = 1;
	for(int i =1; i <= b; i++)
		ans = ans*a;
	return ans;
}
int check(int a,int n) {
	int tot = 0, temp = a;
	while(a) {
		tot += pow(a%10, n);
		a /= 10;
	}
	return tot == temp;
}
int find(int n,int *ans) {
	int top = 0, begin = pow(10, n-1), end = pow(10, n);
	for(int i = begin; i < end ; i++) 
			if(check(i, n))
				ans[top++] = i;
	return top;
}
int main () {
	int n = 0;
	while(1) {
		scanf("%d", &n);
		if(n == 0)
			break;
		int ans[1000], top = find(n, ans);
		printf("%d位的%s共有%d个", n, Name[n], top);
		for(int i = 0; i < top - 1; i++)
			printf("%d,",ans[i]);
		printf("%d\n",ans[top-1]);
				
	}
	return 0;
}
