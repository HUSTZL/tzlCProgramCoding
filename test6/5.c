#include <stdio.h>

int main (int argc, char *args[]) {
	for(int i = 1; i <= argc; i++)
		printf("%s\n", args[i]);
	return 0;
}
