#include <stdio.h>
#include <string.h>
#include "windows.h"
#include "conio.h"

/* textbackground函数在gcc里面不能直接引用头文件 conio.h，需要单独实现 */
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
        textbackground(color);    /*设置文本的背景颜色*/
        printf("This is color %d\r\n", color);
        printf("Press any key to continue\r\n");
        getch();    /* 输入字符看不见，实现按任意键切换颜色的作用 */
    }
    
}

/* 按任意键切换，其实使用getch()函数等待用户输入任意字符，输入后就会进入下一次for循环。 */