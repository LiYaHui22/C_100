#include "stdio.h"

#if 0
void main()
{
	int i, j;
	int num_count = 0;
    int pri_count = 0;

    printf("The numbers are: \n");

	for (i=101; i<=200; i++) {
		for (j=1; j<14; j++) {
			if (i % j == 0) {
			    num_count++;
			}

			if (num_count > 1) {
			    break;
			}
		}

		if (num_count == 1) {
		    printf("%d ", i);
			pri_count++;

			if (pri_count % 5 == 0) {
			    printf("\n");
			}
		}

		num_count = 0;
	}

	printf("\nTotally: %d\n", pri_count);
}
#endif


//参考方法
#if 1
#include "math.h" 
main() {
int m,i,k,h=0,leap=1;

printf("\n");
for(m=101;m<=200;m++) {
	k=sqrt(m+1);
	for(i=2;i<=k;i++)
		if(m%i==0) {
			leap=0;break;
		}
if(leap) {
	printf("%-4d",m);
	h++; 
	if(h%10==0) 
		printf("\n");
} 

leap=1; 
} 
printf("\nThe total is %d\n",h); 
}
#endif

/*
总结:
    该题关键在于，素数有两种情况，一种是1乘以他本身，另一种它是另一个素数的平方。
	所以要根据求取的范围，结合开方的方法来将两种情况都包含进去
*/