/*
    题目：一个 5 位数，判断它是不是回文数。即 12321 是回文数，
          个位与万位相同，十位与千位相同。
*/
#include <stdio.h>

int main()
{
    int number;
    int wan_wei;
    int ge_wei;
    int bai_wei;
    
    printf("Please input the number: ");
    scanf("%d", &number);
    
    wan_wei = number / 10000;
    ge_wei = number % 10;
    
    //先判断首尾两位数
    if (wan_wei == ge_wei) {
        
        //得到中间三位数
        number = (number - (10000 * wan_wei) - ge_wei) / 10;
        
        bai_wei = number / 100;
        ge_wei = number % 10;
        
        //再次判断中间三位数的首位两位数
        if (bai_wei == ge_wei) {
            printf("The number is palindrome !\n");
        } else {
            printf("The number is not a palindrome !\n");
        }
    } else {
        printf("The number is not a palindrome !\n");
    }
    
    return 0;
}