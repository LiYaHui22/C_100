#include"stdio.h"

int main()
{
	int i, j;

	for (i=0; i<8; i++) {
		for (j=0; j<8; j++) {
			if ((i+j) % 2 == 0) {
			    printf("%c%c", 0xa8,0x80);  // �����ɫ����
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
    
    return 0;
}

/*
�ܽ᣺
      ����Ŀ�е����ڷ��ֹ�������ĺڰ׸��ֲַ�����ѧ���ɣ����о�����������ɫ�ķ���
*/