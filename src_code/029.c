/*
   ��Ŀ����һ�������� 5 λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
   ʵ��Ϊ���ⳤ�ȵ����룬���ɵ����ӡ�����������������
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