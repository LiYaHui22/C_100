/*
    题目：利用递归函数调用方式，将所输入的 5 个字符，以相反顺序打印出来
*/

#include <stdio.h>

void func()
{
    char next;

    next = getchar();
    if (next == '\n') {
        return;
    }
    func();
    putchar(next);  //经典妙用：将本次输出写在递归语句之后，可以将各次递归结果倒序输出

}

int main()
{
    printf("please input the characters: ");
    
    func();
    
    return 0;
}

/*  总结：
        char c = getchar(); 与 putchar(c) 的使用.
        递归的使用；
        在递归式子后面继续加语句，这些语句会按和 递归顺序相反的顺序去执行
*/