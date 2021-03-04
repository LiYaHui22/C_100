/*
【程序 41】
题目：学习 static 定义静态变量的用法
*/

#include <stdio.h>

void var_fun(void);

int main(void)
{
    int i;

    for (i=0; i<3; i++) {
		var_fun();
	}
	
	return 0;
}

void var_fun(void)
{
	int var = 0;
	static int var_static = 0;
	
	printf("var = %d\n", var);
	printf("var_static = %d\n", var_static);
	
	var++;
	var_static++;
}

/* 计算结果：
var = 0
var_static = 0
var = 0
var_static = 1
var = 0
var_static = 2
*/