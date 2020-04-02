/*编写一个程序，读取整数直到用户输入0。输入结束后，程序应该报告用户输入的偶数(不包括0)
个数以及这些偶数的平均值、输入的奇数以及奇数的平均值。*/
#include<stdio.h>
int main()
{
    int num;
    int cnt_even = 0,cnt_odd = 0;
    int sum_even = 0,sum_odd = 0;

    printf("Please enter a string of numbers(0 to terminate): ");
    while ( scanf("%d",&num) )
    {
        if ( num == 0 )
        {
            break;
        }
        else if ( num % 2 == 0 )
        {
            cnt_even++;
            sum_even += num;
        }
        else
        {
            cnt_odd++;
            sum_odd += num;
        }
    }
    printf("cnt_even = %d,\taverage value = %.2f.\n",cnt_even,(float)(sum_even / cnt_even) );
    printf("odd_even = %d,\taverage value = %.2f.\n",cnt_odd,(float)(sum_odd / cnt_odd) );

    return 0;
}
