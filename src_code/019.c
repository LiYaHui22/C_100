#include "stdio.h"

void main()
{
	int n, m, i, k;
	int he = 0;
	int j = 0;
	int a[10] = {0};

	for (n=1; n<1000; n++) {
		m = n;

		//求取质因数
		for (i=2; i<=m; i++) {
			while (m % i == 0) {
				a[j] = i;
				m = m / i;
				j++;
			}
		}

		//求取各个因数之和
		for (k=0; k<10; k++) {
			he += a[k];
		}
		he = he + 1;

		//判断是否为完数,是的话，打印输出
		if (he == n && he != 1) {
			printf("%d\n", n);

			printf("1 * ");
			for (k=0; a[k] != 0; k++) {
				if (a[k+1] == 0) {
					printf("%d ", a[k]);
					break;
				}
				printf("%d * ", a[k]);
			}
			printf("= %d\n", n);
            
			printf("1 + ");
			for (k=0; a[k] != 0; k++) {
				if (a[k+1] == 0) {
					printf("%d ", a[k]);
					break;
				}
				printf("%d + ", a[k]);
			}
			printf("= %d\n\n", n);
		}

		//复位数组,为下一个数存储做准备
		for (k=0; k<10; k++) {
			a[k] = 0;
		}
		j = 0;

		//复位和
		he = 0;
	}
}
