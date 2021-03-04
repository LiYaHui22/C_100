/*
������ 43��
��Ŀ��ѧϰʹ�� static ����һ�÷�
*/

#include <stdio.h>

int main(void)
{
	int i;
	int num = 0;
	
	for (i=0; i<3; i++) {
		printf("num = %d\n", num);
		num++;
		
		{
			static int num = 6;
			printf("internal num = %d\n", num);
			num++;
		}
		
	    {
			static int num = 10;
			printf("internal num = %d\n", num);
			num++;
		}
		
	}
	
	return 0;
}
/*
�������н����
num = 0
internal num = 6
internal num = 10
num = 1
internal num = 7
internal num = 11
num = 2
internal num = 8
internal num = 12
*/