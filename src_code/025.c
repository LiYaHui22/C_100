/*

  题目：求 1+2!+3!+...+20!的和

*/

#include "stdio.h"

void main()
{
	int i, j;
	int sum = 0;
	int f = 1;

	for (i=1; i<=20; i++) {
		for (j=i; j>0; j--) {
			f = f * j;
		}

		sum = sum + f;

		if (i < 20) {
		    printf("%d! + ", i);

			//分两次输出
			if (i == 10) {
				printf("\n");
			}

		//最后一个数单独处理
		} else {
			printf("%d! = %d\n\n", i, sum);
		}
	}

}