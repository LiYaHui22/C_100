#include "stdio.h"

void main()
{
	double h = 100.0;
	double total = 100.0;    //第一次下降的原始高度100米
	int i;

	for (i=2; i<=10; i++) {
		h = h * 0.5;
		total += h * 2;
		
		if (i == 10) {
		    printf("%d: %lf\ntotal: %lf\n\n", i, h, total);
		}

        //从题目意思上看，小球是不可能停止的，高度总会大于0，且无限接近于0但是不等于0
		if (h <= 0.0) {
			printf("The ball is on the groud !\n");
		}
	}
}