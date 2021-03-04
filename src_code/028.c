#include <stdio.h>
#define ERROR 0

int age_count(int num_of_people,int age_of_first);

int main()
{
    int num_of_people = 0;
    int age_of_first = 0;
    int result = 0;
    
    printf("num_of_people: ");
    scanf("%d", &num_of_people);
    printf("age_of_first: ");
    scanf("%d", &age_of_first);
    
    result = age_count(num_of_people, age_of_first);
    if (result == ERROR) {
        printf("the parameter of function 'age_count()' is wrong !\n");
        printf("num_of_people: %d ; age_of_first: %d\n", num_of_people, age_of_first);
    }
    
    printf("the age of the %dst peopple is: %d\n", num_of_people, result);
    
    return 0;
}

int age_count(int num_of_people, int age_of_first)
{    
    int age = 0;
    
    if ((num_of_people < 2) || (age_of_first <= 0)) {
        return ERROR;
    }
    
    age = age_of_first + 2;
    
    do {
        if ((num_of_people - 1) < 2) {
            break;
        }
        age = age_count(num_of_people - 1, age);
    }while(0);
    
    return age;
}

/*�ܽ᣺
        �ݹ����棬ÿһ�εݹ����㶼�ᴴ���Լ��ľֲ�������
        �������ݹ��������󷵻ص��������ľֲ�����������
        ÿһ�εݹ鶼Ҫ�����ؽ�����ظ���㡣��˴��� 42 �У�
        ��������أ��ݹ����������ǵ�һ������ֵ 12��10 + 2��
*/