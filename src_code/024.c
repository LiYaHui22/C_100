/*

  ��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ 20 ��֮�͡�

*/

#include "stdio.h"

void main()
{
	int i;
	double t;
	double a = 2.0;
	double b = 1.0;
	double s = 0.0;

	for (i=0; i<20; i++) {
		s = s + a / b;    //��a��bΪ��������ʱ��'/'�Ľ���������С����������'ȡģ����'��

		t = a;
		a = a + b;
		b = t;
	}

	printf("s = %.6lf\n\n", s);
}