#include "stdio.h"

void main()
{
	int i, j, k;

	//前四行的输出
	for (i=0; i<4; i++) {

		//空格的输出
		for (j=0; j<(3-i); j++) {
			printf(" ");
		}

		//星号的输出
		for (k=0; k<(i*2 + 1); k++) {
			printf("*");
		}

		printf("\n");
	}
    
	//后三行的输出
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