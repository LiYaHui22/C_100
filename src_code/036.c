/* 题目：求取100以内的素数 */

#include <stdio.h>
#include <math.h>

#define INT32 int

int main()
{
    INT32 num;
    INT32 factor;
    INT32 range_start = 1;
    INT32 range_end = 100;
    INT32 prime_num_counter = 0;

    for (num = range_start; num <= range_end; num++) {
        for (factor = 2; factor <= sqrt(num); factor++) {
            if (num % factor == 0) {
                printf("%d ", num);
                
                /* 统计素数的个数 */
                prime_num_counter++;
                
                /* 将素数10个一排输出 */
                if (prime_num_counter % 10 == 0) {
                    printf("\n");
                }
                
                break;
            }
        }
    }

    printf("\n\nThere are %d prime numbers in the range !\n", prime_num_counter);
    return 0;    
}