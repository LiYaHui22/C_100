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



//�ο�����
#if 0

#include "stdio.h"
main() {
int i,j,k,n;
printf("'water flower'number is:");
for(n=100;n<1000;n++) {
    i=n/100;    /*�ֽ����λ*/ 
	j=n/10%10;  /*�ֽ��ʮλ*/ 
	k=n%10;     /*�ֽ����λ*/ 
	if(i*100+j*10+k==i*i*i+j*j*j+k*k*k) {
        printf("%-5d",n);
	}
}
printf("\n"); 
}
#endif


/*
�ܽ᣺

     ���⣬�ؼ����� �����ʹ�� ȡ�̺�ȡ�� ��������һ����λ����λ��⡱ 

  ��: 12345
  ��λ = 12345 / 10000
  ǧλ = 12345 / 1000 % 10
  ��λ = 12345 / 100 % 10
  ʮλ = 12345 / 10 % 10
  ��λ = 12345 % 10
*/