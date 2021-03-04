/*
【程序 45】
题目：学习使用 register 定义变量的方法。
*/

#include <stdio.h>

int main(void)
{
	 int tmp = 0;
	/* 加上register关键字 */
     register int i;
     printf("%d", sizeof(i));
	for (i=1; i<10; i++) {
		tmp++;
		printf("tmp = %d\n", tmp);
		printf("i = %d\n\n", i);
	}
	system("wmic process where name=\"a.exe\" get WorkingSetSize");
}
/*
运行结果：
045.c: In function 'main':
045.c:16:3: error: address of register variable 'i' requested
   16 |   printf("&i = %d\n\n", &i);
   system("wmic process where name=\"a.exe\" get WorkingSetSize");
*/