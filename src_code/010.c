#include"stdio.h"

int main()
{
	int i, j;
    printf("\1\1\n");
	for (i=0; i<8; i++) {
		for (j=0; j<8; j++) {
			if (i >= j) {
			    printf("%c%c", 0xa8, 0x80);
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
    �ؼ����ڣ���������������ʾ������״
*/