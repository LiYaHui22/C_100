#include <stdio.h>
#include <string.h>
#include "windows.h"
#include "conio.h"

/* textbackground������gcc���治��ֱ������ͷ�ļ� conio.h����Ҫ����ʵ�� */
int textbackground(short iColor)
{
    HANDLE hd = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbInfo;
    GetConsoleScreenBufferInfo(hd, &csbInfo);
    return SetConsoleTextAttribute(hd, (iColor<<4)|(csbInfo.wAttributes&~0xF0));
}

int main()
{
    int color;
    
    for (color = 0; color < 8; color++) {
        textbackground(color);    /*�����ı��ı�����ɫ*/
        printf("This is color %d\r\n", color);
        printf("Press any key to continue\r\n");
        getch();    /* �����ַ���������ʵ�ְ�������л���ɫ������ */
    }
    
}

/* ��������л�����ʵʹ��getch()�����ȴ��û����������ַ��������ͻ������һ��forѭ���� */