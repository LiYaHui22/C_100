#include <stdio.h>

int main(void)
{
	int i;
	int temp;
	int arr_mem;
	int a[6] = {1, 2, 3, 4, 5, 6};
	
	arr_mem = sizeof(a) / sizeof(a[0]);
	
	printf("origin array:\n");
	for (i=0; i<arr_mem; i++) {
		printf("%d ", a[i]);
	}
	
	for (i=0; i<(arr_mem / 2); i++) {
		temp = a[i];
		a[i] = a[arr_mem - i - 1];    //因为有i=0的情况，所以要多减1
		a[arr_mem - i - 1] = temp;
	}
	
	printf("\nobject array:\n");
	for (i=0; i<arr_mem; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}