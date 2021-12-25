#include <stdio.h>

int main () {
	for(int i = 100; i < 1000; i++) 
		if( (i*i)%1000 == i )
			printf("%d\n",i);
	return 0;
}