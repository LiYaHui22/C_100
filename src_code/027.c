/*
    ��Ŀ�����õݹ麯�����÷�ʽ����������� 5 ���ַ������෴˳���ӡ����
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
    putchar(next);  //�������ã����������д�ڵݹ����֮�󣬿��Խ����εݹ����������

}

int main()
{
    printf("please input the characters: ");
    
    func();
    
    return 0;
}

/*  �ܽ᣺
        char c = getchar(); �� putchar(c) ��ʹ��.
        �ݹ��ʹ�ã�
        �ڵݹ�ʽ�Ӻ����������䣬��Щ���ᰴ�� �ݹ�˳���෴��˳��ȥִ��
*/