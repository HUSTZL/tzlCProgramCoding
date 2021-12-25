#include <stdio.h>
#include <math.h>
int main(void) {
	long long x = 0, k = 0;
	int str[1000] = { 0 };
	scanf("%lld", &x);
	int m = abs(x);
	while (m) {
		int b = m / 2;
		str[k] = m - b * 2;
		k++;
		m /= 2;
	}
	if (x >= 0) {
		for (int i = 31; i >= 0; i--)printf("%d", str[i]);
	}
	else {
		int n = 0;
		str[31] = 1;
		printf("%d", str[31]);
		for (int j = 30; j >= 0; j--) {
			if (str[j] == 1)str[j] = 0;
			else str[j] = 1;
		}
		if (str[0] == 0)str[0] = 1;
		else {
			while (str[n]) {
				if (str[n] == 1)str[n] = 0;
				else str[n] = 1;
				n++;
			}
			str[n] = 1;
		}
		for(int q=30;q>=0;q--)
			printf("%d", str[q]);
	}
	printf("\n");
	return 0;
}
