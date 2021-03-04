/*
   题目：给一个不多于 5 位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
   实现为任意长度的输入，都可倒序打印出来，并计算出个数
*/
#include <stdio.h>

#define ENDD 0

int char_count = 0;

int func(char c)
{
    char ch;
    
    if (c != '\n') {
        char_count++;
        ch = getchar();
        func(ch);
        putchar(c);
    }
    
    return ENDD;    
}

int main()
{
    char c;
    
    printf("please input a numnber: ");
    c = getchar(); 

    printf("\nthe output: ");
    func(c);    
    printf("\nthere are:  %d characters !\n", char_count);
    return 0;
}