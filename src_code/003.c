#include <stdio.h>
#include <math.h>
//#define _TEST
int main()
{
	long X,Y;
	int result1;
	int result2;

#ifdef _TEST
	double a = 1.5;
	Y = a;
	printf("%d\n\n", Y);
#endif

	for(X=0; X<10000000; X++) {

		result1 = sqrt(X + 100);
		result2 = sqrt(X + 168);

		if((result1 * result1 == (X + 100)) &&
		   (result2 * result2 == (X + 168))) {

			printf("%d  is the Number!\n", X);
		}
	}
    
    return 0;
}

/* �ܽ�
   
    ��һ��������ȫƽ����������������������һ�������������Ǵ���ѧ˼ά
	�������ڣ����������ڼ�����ϣ�һ�д���ı�д��Ҫ�����ڴ��ʵ�������
	�˴��������ȥ�ж�result����������С���ͻ���鷳������һ������黹Ҫȥ����

  ����ʱ��Ӧ��ע�⵽��Ҫ��һ�㣬�ڴ��У�С�������������ʽ��ͬ��C������
  �ж�Ӧ���������͡�����result����������ô�Ϳ�����ȷ�Ĵ�ŵ���������Ϊ���ε�
  �����£���result����С������ô�����ŵ��������͵ı����»ᵼ��ʧȥС������,
  ��ʱ�ٽ�����ƽ�����㣬�͵ò���ԭ����ֵX��

  �ɴˣ�Ҳ��֪�����ж�һ���� X �ǲ���������һ�ּ򵥵ķ�����

  int a;

  a = X;
  if (a == X) {

      printf("X is an integer!");
  } else {
      
      printf("X is not an integer!");
  }



*/