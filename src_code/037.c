/*

【程序 38】
题目：求一个 3*3 矩阵对角线元素之和
1.程序分析：利用双重 for 循环控制输入二维数组，再将 a[i][i]累加后输出

*/

#include <stdio.h>

int get_num(int *a);
int print_info(int *a);

int main(void)
{
    int a[9] = {0};
    
    printf("Please input the number !\n");
    
    /* 获取数据 */
    get_num(a);
    
    /* 打印结果 */
    print_info(a);
    
    return 0;
}

int get_num(int *a)
{
    int i;

    /* 使用for循环将数据写入以为数组 */
    for (i = 0; i < 9; i++) {
        scanf("%d", a++);    //先将湖区的数值放入a指向的内存中，a再指向下一个地址
    }
    
    return 0;
}

int print_info(int *a)
{
    int i, j, sum_1, sum_2;
    
    /* 先将数组首地址 */
    int *a_addr = a; 
    
    printf("\n\nThe array is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j< 3; j++) {
            printf("%d ", *a);
            a++;
        }
        /* 每三个元素位一行，打印为二维数组形式 */
        printf("\n");
    }
    
    /* 上面for嵌套借宿后，将形参指针a的值改变了，指向了数组di9个元素的后一个地址，
       该地址未定义，不知带里面有什么。为了方便后面从头开始打印数组，我们让a
       重新指向数组开头  */
    a = a_addr;
    
    /* 求两个对角线的参数的和 */
    sum_1 = *a + *(a + 4) + *(a + 8);
    sum_2 = *(a + 2) + *(a + 4) + *(a + 6);
    
    printf("The sum_1 is : %d + %d + %d = %d\n", *a, *(a + 4), *(a + 8), sum_1);    
    printf("The sum_2 is: %d + %d + %d = %d\n", *(a + 2), *(a + 4), *(a + 6), sum_2);
    
    return 0;
}



/*注意：
        虽然子函数的指针都市a，但是，主函数的a和子函数的a使不一样的，按函数的a
        只是形参，我们将主函数的数组a的地址赋值给了两个子函数。子函数可以修改主函数
        数组a里面的值，但是不能修改主函数里面a的值。
*/