#include <stdio.h>
#include <string.h>
#define DATE_STRING_LEN  11
#define SUCC    1
#define FAILED  0
#define CHAR_ZERO 30
#define CHAR_NINE 39
#define NULL_POINTER 2
#define MIN_LEN 4

typedef struct time_stru{
	int year;
	int month;
	int day;
	char Input[DATE_STRING_LEN];
}timer;

int format_check(char c);
int get_time(timer *data);


int main()
{
	int days;
	int l_ret;
	int ll_ret = FAILED;
	int i;
    timer data;

	while(ll_ret == FAILED) {
        
		printf("Input(like:2019.10.1#):    ");

		for(i=0; i<DATE_STRING_LEN; ++i) {
			/* 保存输入的字符 */
			scanf("%d", data.Input[i]);

			/*对输入的字符进行格式检查 */
			l_ret = format_check(data.Input[i]);
			if (l_ret == FAILED) {
				printf("第%d个字符输出错误，请重新输入!\n", i + 1);
				break;
			}
		}
	}
			/* 分别读取年月日 */
			get_time(&data);

			switch(data.month) {
			    case 1:
					days = data.day;
					break;
				case 2:
					days = 31 + data.day;
					break;
				case 3:
					days = 59 +data.day;
					break;
				case 4:
					days = 90 + data.day;
					break;
				case 5:
					days = 120 + data.day;
					break;
				case 6:
					days = 151 + data.day;
					break;
				case 7:
					days = 181 +data.day;
					break;
				case 8:
					days = 212 + data.day;
					break;
				case 9:
					days = 243 + data.day;
					break;
				case 10:
					days = 273 + data.day;
					break;
				case 11:
					days = 304 +data.day;
					break;
				case 12:
					days = 334 + data.day;
					break;
				default:
					printf("the month is wrong!");
					break;
			}
            if (data.month > 2) {
			    if((data.year % 4 == 0) && (data.year % 100 != 0) || (data.year % 400 == 0)) {
				    days = days + 1;
					printf("it is the %d day of the %d year!\n", days, data.year);
				} else {}
			} else {
			    printf("it is the %d day of the %d year!\n", days, data.year);
			}
            
    return 0;
}

int format_check(char c)
{
	if(((c > '0')&&(c <= '9')) || (c == '.')) {
		return SUCC;
	} else {
		return FAILED;
	}
}

int get_time(timer *data)
{
	int i = 0;
	int j = 0;
	int a[MIN_LEN] ={0};

	if (data == NULL) {
		return NULL_POINTER;
	}

	while(data->Input[i] != '#') {
		    if (data->Input[i] != '.'){
			    a[j] = (int)data->Input[i];
				i++;
				j++;
			} else {
			    data->year = a[0]*10^(j-1) + a[1]*10^(j-2) + a[2]*10^(j-3) + a[3]; 
				memset(a, 0, sizeof(a));
				j = 0;
				i++;

				if (data->Input[i] != '.'){
					a[j] = (int)data->Input[i];
					i++;
					j++;
				} else {
					data->month = a[0]*10^(j-1) + a[1]*10^(j-2) + a[2]*10^(j-3) + a[3]; 
					memset(a, 0, sizeof(a));
					j = 0;
				    i++;

					if (data->Input[i] != '#') {
						a[j] = (int)data->Input[i];
						i++;
					    j++;
					} else {
						data->day = a[0]*10^(j-1) + a[1]*10^(j-2) + a[2]*10^(j-3) + a[3]; 
					}
				}
			}
	}
	return SUCC;
}