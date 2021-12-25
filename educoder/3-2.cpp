#include <stdio.h>

int main () {
	for(int i = 1; i < 10000 ; i++) {
		int tot = 0;
		for(int j = 1; j < i; j++)
			if(i%j == 0)
				tot += j;
		if(tot == i) {
			printf("%d=",i);
			int temp = 0;
			for(int j = 1; j < i; j++) 
				if(i%j == 0) {
					if(temp + j == i)
						printf("%d", j); 
					else {
						temp = temp + j;
						printf("%d+", j);
					}
				}
			printf("\n"); 
		}
	}
	return 0;
}
