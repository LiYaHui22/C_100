/*
	������ 39��
	��Ŀ����һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
 */

#include <stdio.h>

#define OK 0
#define ERROR 1

#define ARR_LEN 10
#define ARR_NEW_LEN 11

/* �궨�庯���ı����һ��ҪС�ģ������뺯���б���������
   ������������Ԥ�ϵĴ��󣬱��磺md_i����Ϊ���뺯���е�i���ֿ��� */
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
		/* ��Ϊ��֪������Чֵ������0, ������ж�������Чֵ���� */
		if (arr[i] != 0) {
			arr_num++;
		}
	}
	/* �ڶ�β */
	if (number >= arr[arr_num-1]){
        ARR_COPY(arr, arr_new, 0, arr_num);
		arr_new[arr_num] = number;
	}
	
	/* �ڶ��� */
	else if (number <= arr[0]) {
		arr_new[0] = number;
        for (i=0; i<arr_num; i++) {
			arr_new[i+1] = arr[i];
		}
	}
	
	/* �ڶ��� */
	else {
		for (i=1; i<arr_num; i++) {
			/* �ҳ�����ĵط� */
			if (arr[i] >= number) {
				ARR_COPY(arr, arr_new, 0, i);
				break;
			}
		}

		/* �������� */
		arr_new[i] = number;
		
		printf("\n");
		/* ����������� */
		for (; i<arr_num+1; i++) {
			arr_new[i+1] = arr[i];
		}
	}
	
	for (i=0; i<(arr_num + 1); i++) {
        printf("%d ", arr_new[i]);		
	}
	
	return OK;
}

