#include "stdio.h"

void main()
{
	double h = 100.0;
	double total = 100.0;    //��һ���½���ԭʼ�߶�100��
	int i;

	for (i=2; i<=10; i++) {
		h = h * 0.5;
		total += h * 2;
		
		if (i == 10) {
		    printf("%d: %lf\ntotal: %lf\n\n", i, h, total);
		}

        //����Ŀ��˼�Ͽ���С���ǲ�����ֹͣ�ģ��߶��ܻ����0�������޽ӽ���0���ǲ�����0
		if (h <= 0.0) {
			printf("The ball is on the groud !\n");
		}
	}
}