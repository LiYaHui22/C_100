#include<stdio.h>

int main()
{
	double bonus = 0;
	float profit = 0;
    double bonus_1, bonus_2, bonus_3, bonus_4, bonus_5;

	bonus_1 = 100000 * 0.1;              //�������10��Ľ���
	bonus_2 = bonus_1 + 100000 * 0.075;  //�������20��Ľ���
	bonus_3 = bonus_2 + 200000 * 0.05;   //�������40��Ľ���
	bonus_4 = bonus_3 + 200000 * 0.03;   //�������60��Ľ���
	bonus_5 = bonus_4 + 400000 * 0.015;  //�������100��Ľ���

	/* ��ȡ���۶� */
	printf("Please input the profit: ");
	scanf("%f", &profit);
    
	/* �ж������С��ѡ����ʵĽ��� */
	if (profit <= 100000) {
	    bonus = profit * 0.1;
	}
	else if ((profit > 100000) && (profit <= 200000)) {
	    bonus = bonus_1 + (profit - 100000) * 0.075;
	}
	else if ((profit > 200000) && (profit <= 400000)) {
	    bonus = bonus_2 + (profit - 200000) * 0.05;
	}
	else if ((profit > 400000) && (profit <= 600000)) {
	    bonus = bonus_3 + (profit - 400000) * 0.03;
	}
	else if ((profit > 600000) && (profit <= 1000000)) {
	    bonus = bonus_4 + (profit - 600000) * 0.015;
	}
	else if (profit > 1000000) {
	    bonus = bonus_5 + (profit - 1000000) * 0.01;
	}

	printf("You get bonus: %f\n", bonus);
    
    return 0;
}