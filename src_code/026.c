#include <stdio.h>
#define ERR 0

int digui(int n)
{
	if (n > 0) {
		if (n == 1) {
			return 1;
		} else {
			return n * digui(n - 1);
		}
	} else {
		return ERR;
	}
}
int main()
{
	int n = 0;

	printf("input the number: ");
	scanf("%d", &n);

	do {
	    if (digui(n) == ERR) {
		    printf("the param must > 0 !\n");
			break;
		} else {
			printf("%d! = %d\n", n, digui(n));
		}
	}while(0);

	return 0;
}