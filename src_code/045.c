/*
������ 45��
��Ŀ��ѧϰʹ�� register ��������ķ�����
*/

#include <stdio.h>

int main(void)
{
	 int tmp = 0;
	/* ����register�ؼ��� */
     register int i;
     printf("%d", sizeof(i));
	for (i=1; i<10; i++) {
		tmp++;
		printf("tmp = %d\n", tmp);
		printf("i = %d\n\n", i);
	}
	system("wmic process where name=\"a.exe\" get WorkingSetSize");
}
/*
���н����
045.c: In function 'main':
045.c:16:3: error: address of register variable 'i' requested
   16 |   printf("&i = %d\n\n", &i);
   system("wmic process where name=\"a.exe\" get WorkingSetSize");
*/