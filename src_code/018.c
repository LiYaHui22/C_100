#include "stdio.h"
#include "math.h"

void main()
{
	int j, n, count;
	int i = 0;
	int total = 0;
	int a[10] = {0};

	printf("Please input the:\nThe number: ");
	scanf("%d", &n);
	printf("The count: ");
    scanf("%d", &count);
    printf("\n");

	for (j=0; j<count-1; j++) {
		a[j] = a[i] + n * pow(10, j);
		printf("%d + ", a[j]);
		i = j;            //�������������±꣬���´�ʹ��

		total += a[j];    //�ۼ�ÿһ�εļ�����
	}
	//Ϊ�˴�ӡ��ʽ�����࣬�����һ�����ݵ���д����
	a[j] =a[j - 1] + n * pow(10, j);
    total += a[j];

	printf("%d = %d\n", a[j], total);
}

/*
    �ܽ᣺
	    ����Ŀ�Ĺؼ����ڣ���������֮��Ĺ�ϵ��Ҳ����һ������ǰһ�����ټ� a * pow(10, n),֪�������ϵ��
		ֻ��Ҫ�����������ֵ�������䱣�棬�����ĳ��ֵ��˳�Ŵ˴���ֵ�ı㣬�����ۼӵ���ֵ���������
		�������е�ֵ��Ҳ�͵õ����������ĺ͡�
		
		������Ϊ�������ֻ��Ҫ��ӡ�������ܵĺͣ���ʵ����Ҫ�����鱣�棬ֻҪ�������������a[j]��a[j-1]���ɡ�
*/