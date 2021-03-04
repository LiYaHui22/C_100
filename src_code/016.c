#include "stdio.h"

void main()
{
	int i;
	int a[3] = {0};
	int max_yue = 0;
	int min_bei = 0;

	printf("Please input the numbers: ");
	scanf("%d", &a[0]);
	scanf("%d", &a[1]);
    
	if ((a[0] == 0) || (a[1] == 0)) {
		printf("The min_bei is invalid !\n");
		printf("The max_yue is invalid !\n");
	} else {
		if (a[0] >= a[1]){
			;
		} else {
			a[2] = a[0];
			a[0] = a[1];
			a[1] = a[2];
		}

		for (i=2; i<= a[1]; i++) {
			if ((a[0] % i == 0) && (a[1] % i == 0)) {
				max_yue = i;
			}
		}
		if (max_yue == 0) {
			printf("The max_yue is: 1\n");
		} else {
			printf("The max_yue is: %d\n", max_yue);
		}

		if (a[0] % a[1] == 0) {
			printf("The min_bei is: %d\n", a[0]);
		} else {
			printf("The min_bei is: %d\n", a[0]*a[1]);
		}
	}

}
