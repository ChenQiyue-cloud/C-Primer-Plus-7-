/*1988年的美国联邦税收计划是近代最简单的税收方案。
它分为4个类别，每个类别有两个等级。
下面是税收计划的摘要(美元数为应征税的收入)：

类别								  税金
单身								  17850美元按15%计，超出部分按28%计
户主								  23900美元按15%计，超出部分按28%计
已婚，共有					   29750美元按15%计，超出部分按28%计
已婚，离异					   14875美元按15%计，超出部分按28%计

例如：一位工资为20000美元的单身纳税人，应缴纳税费 0.15x17850+0.28x(20000-17850)美元。
编写一个程序，让用户指定缴纳税金的种类和应纳税收入，然后计算税金。
程序应通过循环让用户可以多次输入。*/
#include<stdio.h>
int main()
{
    float taxes = 0,income = 0;
    int choice;

    int i;
    for ( i=0; i<65; i++ )
    {
        printf("*");
    }
    putchar('\n');
    printf("%-20s%-20s\n%-20s%-20s\n%-20s\n","1)单身","2)户主","3)已婚，共有","4)已婚，离异","按q选择退出");
    for ( i=0; i<65; i++ )
    {
        printf("*");
    }
    putchar('\n');

    printf("Please enter your income: ");
    scanf("%f",&income);
    printf("Please select the type of tax payment: ");
    scanf("%d",&choice);

    while ( (getchar()) != 'q' )
    {
        if ( choice > 5 || choice < 1 )
        {
            printf("Please select a number from 1 to 4!!\n");
            break;
        }

        switch ( choice )
        {
        case 1:
            if ( income > 17850 )
            {
                taxes = ( income - 17850 ) * 0.28 + 17850 * 0.15;
            }
            else
            {
                taxes = income * 0.15;
            }
            break;
        case 2:
            if ( income > 23900 )
            {
                taxes = ( income - 23900 ) * 0.28 + 23900 * 0.15;
            }
            else
            {
                taxes = income * 0.15;
            }
            break;
        case 3:
            if ( income > 29750 )
            {
                taxes = ( income - 29750 ) * 0.28 + 29750 * 0.15;
            }
            else
            {
                taxes = income * 0.15;
            }
            break;
        case 4:
            if ( income > 14875 )
            {
                taxes = ( income - 14875 ) * 0.28 + 14875 * 0.15;
            }
            else
            {
                taxes = income * 0.15;
            }
            break;
        }
        printf("taxes = %f\n\n",taxes);

        printf("Please enter your income: ");
        scanf("%f",&income);
        printf("Please select the type of tax payment: ");
        scanf("%d",&choice);
    }
    return 0;
}
