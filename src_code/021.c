/*

��Ŀ�����ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ�����ڶ�������
�ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ�������� 10 ����
�����ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�

*/



#include "stdio.h"

void main()
{
	int day;
	int x = 0;
	int y = 1;

	for (day = 9; day > 0; day--) {
		x = (y + 1) * 2;
		y = x;
        //printf("%d, %d\n", day, y);      //�����ӡ����������Ƿ���ȷ
	}

	printf("\n\ntotal: %d\n", y);
}