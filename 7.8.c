/*修改练习7的假设a,让程序可以给出一个供选择的工资等级菜单。使用 switch 完成工资等级
的选择。运行程序后，显示的菜单应该类似这样：
*******************************************************************************
Enter the number corresponding to the desired pay rate of action:
1) $8.75/hr                                             2) $9.33/hr
3) $10.00/hr	                                        4) $11.20/hr
5) quit
*******************************************************************************
如果选择一个1~4其中的一个数字，程序应该询问用户工作的小时数。程序要通过循环运行，除
非用户输入 5。如果输入1~5 以外的数字，程序应该提醒用户输入正确的选项，然后再重复显
示菜单提示用户输入。使用#define创建符号常量表示各工资等级和税率。*/
#include<stdio.h>
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
void compute(int choice,int hour)
{
    float money_hr;
    float wages,taxes,net_income;

    switch ( choice )
    {
    case 1:
        money_hr = 8.75;
        break;
    case 2:
        money_hr = 9.33;
        break;
    case 3:
        money_hr = 10.00;
        break;
    case 4:
        money_hr = 11.20;
        break;
    default:
        break;
    }
    if ( hour <= 40 )
    {
        wages = money_hr * hour;
    }
    else
    {
        wages = money_hr * hour * 1.5;
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
}
int main()
{
    int hour,choice;

    int i;
    for ( i=0; i<65; i++ )
    {
        printf("*");
    }
    putchar('\n');
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("%-20s%-20s\n%-20s%-20s\n%-20s\n","1)$8.75/hr","2)$9.33/hr","3)$10.00/hr","4)$11.20/hr","5)quit");
    for ( i=0; i<65; i++ )
    {
        printf("*");
    }
    putchar('\n');

    printf("Please select a number( 1 ~ 4 ): ");
    scanf("%d",&choice);
    if ( choice == 5 )
            exit(1);
    printf("Please enter the working hours of the week: ");
    scanf("%d",&hour);

    while (1)
    {
        if ( choice > 5 || choice < 1 )
        {
            printf("Please select a number from 1 to 4!!\n");
        }
        else
        {
            switch ( choice )
            {
            case 1:
                compute(1,hour);
                break;
            case 2:
                compute(2,hour);
                break;
            case 3:
                compute(3,hour);
                break;
            case 4:
                compute(4,hour);
                break;
            }
        }
        printf("Please select a number( 1 ~ 4 ): ");
        scanf("%d",&choice);
        if ( choice == 5 )
            exit(1);
        printf("Please enter the working hours of the week: ");
        scanf("%d",&hour);
    }
    return 0;
}
