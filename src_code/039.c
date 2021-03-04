/*
	【程序 39】
	题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
 */

#include <stdio.h>

#define OK 0
#define ERROR 1

#define ARR_LEN 10
#define ARR_NEW_LEN 11

/* 宏定义函数的便令定义一定要小心，不能与函数中变量重名，
   否则会出现难以预料的错误，比如：md_i就是为了与函数中的i区分开来 */
#define ARR_COPY(ARR_SOU, ARR_TAR, I, LEN)  \
        for (md_i=I; md_i<LEN; md_i++) {         \
		    ARR_TAR[md_i] = ARR_SOU[md_i];        \
		}
                              

int main(void)
{
	int i;
	int md_i;
	int arr_num = 0;
	int number = 0;
	int arr[ARR_LEN] = {1, 4, 6, 8, 10, 14, 0, 0, 0, 0};
	int arr_new[ARR_NEW_LEN] = {0};
	
	printf("Please input the number: ");
	scanf("%d", &number);
	
	for (i=0; i<ARR_LEN; i++) {
		/* 因为已知数组有效值不包含0, 借此来判断数组有效值个数 */
		if (arr[i] != 0) {
			arr_num++;
		}
	}
	/* 在队尾 */
	if (number >= arr[arr_num-1]){
        ARR_COPY(arr, arr_new, 0, arr_num);
		arr_new[arr_num] = number;
	}
	
	/* 在队首 */
	else if (number <= arr[0]) {
		arr_new[0] = number;
        for (i=0; i<arr_num; i++) {
			arr_new[i+1] = arr[i];
		}
	}
	
	/* 在队中 */
	else {
		for (i=1; i<arr_num; i++) {
			/* 找出插入的地方 */
			if (arr[i] >= number) {
				ARR_COPY(arr, arr_new, 0, i);
				break;
			}
		}

		/* 插入数字 */
		arr_new[i] = number;
		
		printf("\n");
		/* 补充后续数字 */
		for (; i<arr_num+1; i++) {
			arr_new[i+1] = arr[i];
		}
	}
	
	for (i=0; i<(arr_num + 1); i++) {
        printf("%d ", arr_new[i]);		
	}
	
	return OK;
}

