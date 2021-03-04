#include "stdio.h"

void main()
{
	char c;
	int letter = 0;
	int number = 0;
	int space = 0;
	int other = 0;
    
	printf("Please input:\n");
	//此处的 != 的优先级比 = 更高，需要在 = 外加括号
	while ((c = getchar()) != '\n') {
		if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))) {
		    letter++;
		}
		else if ((c >= '0') && (c <= '9')) {
		    number++;
		}
		else if (c == ' ') {
			space++;
		}
		else {
		    other++;
		}
	}
	printf("there are:\n");
	printf("letter: %d\nnumber: %d\nspace: %d\nother: %d\n", letter, number, space, other);
}