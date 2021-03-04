#include "stdio.h"

int main()
{
	int i;
	int month;
	int c_month = 0;    //这个月兔子对数
    int l_month = 1;    //上个月兔子的对数
	int ll_month = 1;   //上上个月兔子的对数
    int old_rabbit;
    int newborn_rabbit;

	printf("Please input the month: ");
	scanf("%d", &month);
    
    //前两个月为特殊情况，单独处理
	if ((c_month == 1) || (c_month == 2)) {
		printf("The number is: 1\n");
	} else {
        //第三个月起，开始产生规律
        for (i=3; i<=month; i++) {
            old_rabbit = l_month;
            newborn_rabbit = ll_month;
            c_month = old_rabbit + newborn_rabbit;   //当前月新生兔子对数 等于 上上个月对数，非新生为上个月对数
            ll_month = l_month;
            l_month = c_month;
        }
	    printf("The number is: %d\n", c_month);
    }
    
    return 0;
}

/* 本题的核心在于，找出这不断繁殖之中恒定的规律。

    当前月兔子对数 可以分为两个种类，一个是新生种，一个是非新生种。，

    因为，上上个月的新生种到这个月刚好生产
    所以，这个月 新生种的数量 刚好等于 上上个月的数量
     
    而非新生种就是上个月的数量

    结果： 当前月兔子对数 = 上个月的对数 + 上上个月对数 (month >= 3)
*/