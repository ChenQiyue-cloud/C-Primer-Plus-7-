/*编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入
做如下假设：
a.基本工资 = 1000美元 / 小时
b.加班(超过40小时) = 1.5倍时间
c.税率:		前300美元为15%
				  续150美元为20%
				  余下的为25%
用#define定义符号常量，不用在意是否符合当前的税法。*/
#include<stdio.h>
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
int main()
{
    int hour;
    float wages,taxes,net_income;

    printf("Please enter the working hours of the week: ");
    scanf("%d",&hour);

    if ( hour <= 40 )
    {
        wages = 10.0 * hour;
    }
    else
    {
        wages = 10.0 * 40 + (hour - 40) * 1.5 * 10;
    }

    if ( wages <= 300 )
    {
        taxes = wages * RATE1;
    }
    else if ( wages > 300 && wages <= 450 )
    {
        taxes = 300 * RATE1 + (wages - 300) * RATE2;
    }
    else
    {
        taxes = 300 * RATE1 + 150 * RATE2 + (wages - 450) *  RATE3;
    }
    net_income = wages - taxes;

    printf("wages = %.2f\ntaxes = %.2f\nnet income = %.2f\n",wages,taxes,net_income);

    return 0;
}
