#include <cstdio>
#include <iostream>
using namespace std;
char u[]="UVWXYZ";
char v[]="xyz";
struct T{
	int x;
	char c;
	char *t;
}a[]={{11, 'A', u},{100, 'B', v}},*p=a;
int main () {
    cout << *p++->t,*p->t;
    return 0;
}