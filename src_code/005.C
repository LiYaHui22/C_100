#include<stdio.h>

int main()
{
	int a[3] = {0};
	int m, i, j;

	printf("Please input three numbers: ");
	//scanf函数一次只能获取一个数据，需要for循环帮助来获取多个输入
	for (i=0; i<3; i++) {
	    scanf("%d", &a[i]);
	}

	for (i=0; i<2; i++) {
		for (j=i+1; j<3; j++) {
			if (a[i] > a[j]) {
			    m = a[i];
				a[i] = a[j];
				a[j] = m;
			}    
		}
	}
    
	printf("%d < %d < %d\n", a[0], a[1],a[2]);
    
    return 0;
}