/*

  题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前 20 项之和。

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
		s = s + a / b;    //当a和b为浮点数的时候，'/'的结果将会产生小数，不在是'取模操作'了

		t = a;
		a = a + b;
		b = t;
	}

	printf("s = %.6lf\n\n", s);
}