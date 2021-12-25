#include <stdio.h>
void task0 () { printf("task0 is called!\n");}
void task1 () { printf("task1 is called!\n");}
void task2 () { printf("task2 is called!\n");}
void task3 () { printf("task3 is called!\n");}
void task4 () { printf("task4 is called!\n");}
void task5 () { printf("task5 is called!\n");}
void task6 () { printf("task6 is called!\n");}
void task7 () { printf("task7 is called!\n");}
void task8 () { printf("task8 is called!\n");}
void task9 () { printf("task9 is called!\n");}
void execute(void (*p[])(), int n) {
    for(int i = 0; i < n; i++) 
        p[i]();
}
void scheduler() {
    void (*p[]) () = {task0, task1, task2, task3, task4, task5, task6, task7, task8, task9};
    char a[1000];
    void (*work[1000]) ();
    scanf("%s",a);
    int n = 0;
    for(n = 0; a[n] != '\0'; n++) 
        work[n] = p[a[n]-'0'];
    execute(work, n);
}
int main () {
	scheduler();
	return 0;
}