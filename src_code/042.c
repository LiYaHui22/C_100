/*
������ 42��
��Ŀ��ѧϰʹ�� auto ����������÷�
*/

#include <stdio.h>

int main(void)
{
	int i;
	int num = 2;
	
	for (i=0; i<3; i++) {
		printf("num=%d\n", num);
		num++;
		
		{
	    auto int num = 1;
		printf("the internal block num = %d\n", num);
		num++;
		}
		
		{
	    auto int num = 8;
		printf("the second internal block num = %d\n", num);
		num++;
		}
	}
	return 0;
}

/*
���н����
num=2
the internal block num = 1
the second internal block num = 8
num=3
the internal block num = 1
the second internal block num = 8
num=4
the internal block num = 1
the second internal block num = 8
*/
