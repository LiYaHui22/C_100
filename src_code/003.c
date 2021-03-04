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

/* 总结
   
    “一个数是完全平方数，那它开方的数就是一个整数”，这是纯数学思维
	问题在于，代码运行在计算机上，一切代码的编写都要符合内存的实际情况，
	此处，如果把去判断result是整数还是小数就会很麻烦，就有一大堆事情还要去做，

  而此时，应该注意到重要的一点，内存中，小数和整数存放形式不同，C语言中
  有对应的数据类型。若是result是整数，那么就可以正确的存放到数据类型为整形的
  变量下，而result若是小数，那么将他放到整数类型的变量下会导致失去小数部分,
  此时再将它的平方运算，就得不到原来的值X。

  由此，也就知道了判断一个数 X 是不是正数的一种简单的方法：

  int a;

  a = X;
  if (a == X) {

      printf("X is an integer!");
  } else {
      
      printf("X is not an integer!");
  }



*/