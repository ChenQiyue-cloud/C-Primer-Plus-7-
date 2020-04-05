/*9.编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。*/
#include<stdio.h>
int main()
{
    int a = 0;

    printf("Please enter an integer: ");
    scanf("%d",&a);

    int i,j;
    int isPrime = 1; //isPrime = 0不是素数, = 1是素数

    for ( j=2; j<=a; j++ )
    {
        isPrime = 1;
        for ( i=2; i<j; i++ )
        {
            if ( j % i == 0 )
            {
                isPrime = 0;
                break;
            }
        }
        if ( isPrime == 1 )
        {
            printf("%d\t",j);
        }
    }
    return 0;
}
