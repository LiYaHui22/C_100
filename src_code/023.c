#include "stdio.h"

void main()
{
	int i, j, k;

	//ǰ���е����
	for (i=0; i<4; i++) {

		//�ո�����
		for (j=0; j<(3-i); j++) {
			printf(" ");
		}

		//�Ǻŵ����
		for (k=0; k<(i*2 + 1); k++) {
			printf("*");
		}

		printf("\n");
	}
    
	//�����е����
	for (i=2; i>=0; i--) {
		for (j=0; j<(3 - i); j++) {
			printf(" ");
		}

		for (k=(i * 2 + 1); k>0; k--) {
			printf("*");
		}

		printf("\n");
	}
	printf("\n\n");
}