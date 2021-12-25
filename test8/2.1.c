#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	char ch;
	if(argc!=2){
		printf("Arguments error!\n");
		exit(-1);
	}
	if(freopen(argv[1],"r",stdin) == NULL) {       /* fp ָ�� filename */
		printf("Can't open %s file!\n",argv[1]);
		exit(-1);
	}

	while(scanf("%c", &ch)!=EOF)          /* ��filename�ж��ַ� */ //�������� 
	   putchar(ch);                  /* ����ʾ����д�ַ� */
	fclose(stdout);                      /* �ر�filename */
 	return 0;	
}

