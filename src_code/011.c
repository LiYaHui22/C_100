#include "stdio.h"

int main()
{
	int i;
	int month;
	int c_month = 0;    //��������Ӷ���
    int l_month = 1;    //�ϸ������ӵĶ���
	int ll_month = 1;   //���ϸ������ӵĶ���
    int old_rabbit;
    int newborn_rabbit;

	printf("Please input the month: ");
	scanf("%d", &month);
    
    //ǰ������Ϊ�����������������
	if ((c_month == 1) || (c_month == 2)) {
		printf("The number is: 1\n");
	} else {
        //���������𣬿�ʼ��������
        for (i=3; i<=month; i++) {
            old_rabbit = l_month;
            newborn_rabbit = ll_month;
            c_month = old_rabbit + newborn_rabbit;   //��ǰ���������Ӷ��� ���� ���ϸ��¶�����������Ϊ�ϸ��¶���
            ll_month = l_month;
            l_month = c_month;
        }
	    printf("The number is: %d\n", c_month);
    }
    
    return 0;
}

/* ����ĺ������ڣ��ҳ��ⲻ�Ϸ�ֳ֮�к㶨�Ĺ��ɡ�

    ��ǰ�����Ӷ��� ���Է�Ϊ�������࣬һ���������֣�һ���Ƿ������֡���

    ��Ϊ�����ϸ��µ������ֵ�����¸պ�����
    ���ԣ������ �����ֵ����� �պõ��� ���ϸ��µ�����
     
    ���������־����ϸ��µ�����

    ����� ��ǰ�����Ӷ��� = �ϸ��µĶ��� + ���ϸ��¶��� (month >= 3)
*/