/*
    ��Ŀ��һ�� 5 λ�����ж����ǲ��ǻ��������� 12321 �ǻ�������
          ��λ����λ��ͬ��ʮλ��ǧλ��ͬ��
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
    
    //���ж���β��λ��
    if (wan_wei == ge_wei) {
        
        //�õ��м���λ��
        number = (number - (10000 * wan_wei) - ge_wei) / 10;
        
        bai_wei = number / 100;
        ge_wei = number % 10;
        
        //�ٴ��ж��м���λ������λ��λ��
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