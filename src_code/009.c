#include"stdio.h"

int main()
{
	int i, j;

	for (i=0; i<8; i++) {
		for (j=0; j<8; j++) {
			if ((i+j) % 2 == 0) {
			    printf("%c%c", 0xa8,0x80);  // 输出白色方格
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
      本题目中点在于发现国际象棋的黑白个字分布的数学规律，还有就是如何输出白色的方格
*/