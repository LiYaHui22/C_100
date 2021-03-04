 /*
  *  题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
  */

#include <stdio.h>
#define False 0
#define True 1

int scanf_s(char *letter);
int sec_judge(char first_letter, char second_letter);

int main()
{
    int i;
    int is_day = False;
    char first_letter;
    char letter;
    
    //将星期名称的首字母方人员数组，其中最后两个必须是 t 和 s，位置不能乱
    //这样位置固定写，有利于后面switch语句的简化
    char name[5] = {'M', 'W', 'F', 'T', 'S'};
    
    printf("Please input the first letter of the data: ");
    scanf_s(&first_letter);

    for (i = 0; i < 5; i++) {
    
        //输入字母支持大小写
        if ((first_letter == name[i]) || (first_letter == (name[i] + 32))) {
            switch (i) {
            case 0:
                printf("It is Monday !\n");
                break;
            case 1:
                printf("It is Wednesday !\n");
                break;
            case 2:
                printf("It is Friday !\n");
                break;
            case 3:
            case 4:
                printf("Please input the second_letter letter of the data: ");
                scanf_s(&letter);
                sec_judge(first_letter, letter);
                break;
            }
            
            is_day = True;
        }
        
        if (is_day == True) {
            break;
        }
    }
    
    if(is_day == False) {
        printf("It is an invalid input !\n");
    }
    
    return 0;
}


/*
 * 子函数作用：给有歧义的首字母提供进一步判断
 */
int sec_judge(char first_letter, char second_letter)
{
    if ((first_letter == 'T') || (first_letter == 't')) {
        if ((second_letter == 'U') || (second_letter == 'u')) {
            printf("It is Tuesday !\n");
        } else {
            printf("It is Thursday !\n");
        }
    }
    
    if ((first_letter == 'S') || (first_letter == 's')) {
        if ((second_letter == 'U') || (second_letter == 'u')) {
            printf("It is Sunday !\n");
        } else {
            printf("It is Saturday !\n");
        }
    }
    
    return 0;
}

/*
 * 子函数作用：将scanf写为安全函数，以避免连续读取输入字符时出现读取到回车符 '\n' 的情况发生
 */
int scanf_s(char *letter)
{
    if (letter == NULL) {
        printf("null prt!\n");
        return False;
    }
    
    scanf("%c", letter);
    
    if (*letter == '\n') {
        scanf_s(letter);
    }
    
    return True;
}

















