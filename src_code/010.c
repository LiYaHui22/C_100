#include"stdio.h"

int main()
{
	int i, j;
    printf("\1\1\n");
	for (i=0; i<8; i++) {
		for (j=0; j<8; j++) {
			if (i >= j) {
			    printf("%c%c", 0xa8, 0x80);
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
    
    return 0;
}

/*
总结：
    关键在于，如何在输出界面显示阶梯形状
*/