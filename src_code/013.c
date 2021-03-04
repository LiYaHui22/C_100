# if 1
#include "stdio.h"
#include "math.h"

void main()
{
	int i, ge_wei, shi_wei, bai_wei;
    int num_count = 0;

	for (i=100; i<=999; i++) {
	    bai_wei = i / 100;
		shi_wei = (i - bai_wei * 100) / 10;
		ge_wei = i - (bai_wei * 100) - (shi_wei * 10);

		if (i == pow(bai_wei,3) + pow(shi_wei, 3) + pow(ge_wei, 3)) {
		    printf("%d ", i);
			num_count++;
		}
	}
	printf("\nTotally: %d\n", num_count);

}
#endif



//参考方法
#if 0

#include "stdio.h"
main() {
int i,j,k,n;
printf("'water flower'number is:");
for(n=100;n<1000;n++) {
    i=n/100;    /*分解出百位*/ 
	j=n/10%10;  /*分解出十位*/ 
	k=n%10;     /*分解出个位*/ 
	if(i*100+j*10+k==i*i*i+j*j*j+k*k*k) {
        printf("%-5d",n);
	}
}
printf("\n"); 
}
#endif


/*
总结：

     此题，关键在于 “混合使用 取商和取余 操作来将一个多位数按位拆解” 

  如: 12345
  万位 = 12345 / 10000
  千位 = 12345 / 1000 % 10
  百位 = 12345 / 100 % 10
  十位 = 12345 / 10 % 10
  个位 = 12345 % 10
*/