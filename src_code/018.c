#include "stdio.h"
#include "math.h"

void main()
{
	int j, n, count;
	int i = 0;
	int total = 0;
	int a[10] = {0};

	printf("Please input the:\nThe number: ");
	scanf("%d", &n);
	printf("The count: ");
    scanf("%d", &count);
    printf("\n");

	for (j=0; j<count-1; j++) {
		a[j] = a[i] + n * pow(10, j);
		printf("%d + ", a[j]);
		i = j;            //保留本次数组下标，供下次使用

		total += a[j];    //累加每一次的计算结果
	}
	//为了打印格式的整洁，将最后一个数据单独写出，
	a[j] =a[j - 1] + n * pow(10, j);
    total += a[j];

	printf("%d = %d\n", a[j], total);
}

/*
    总结：
	    该题目的关键在于，看出数据之间的关系，也就是一个数是前一个数再加 a * pow(10, n),知道这个关系，
		只需要依次求出各个值，并将其保存，在求得某个值后，顺着此次求值的便，将其累加到总值变量，最后
		求完所有的值后，也就得到了所有数的和。
		
		另：在因为计算过程只需要打印于最后的总的和，其实不需要用数组保存，只要用两个变量替代a[j]与a[j-1]即可。
*/