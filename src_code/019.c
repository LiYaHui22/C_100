#include "stdio.h"

void main()
{
	int n, m, i, k;
	int he = 0;
	int j = 0;
	int a[10] = {0};

	for (n=1; n<1000; n++) {
		m = n;

		//��ȡ������
		for (i=2; i<=m; i++) {
			while (m % i == 0) {
				a[j] = i;
				m = m / i;
				j++;
			}
		}

		//��ȡ��������֮��
		for (k=0; k<10; k++) {
			he += a[k];
		}
		he = he + 1;

		//�ж��Ƿ�Ϊ����,�ǵĻ�����ӡ���
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

		//��λ����,Ϊ��һ�����洢��׼��
		for (k=0; k<10; k++) {
			a[k] = 0;
		}
		j = 0;

		//��λ��
		he = 0;
	}
}
