/*使用if else语句编写一个程序读取输入，读到#停止
使用感叹号替换句号，用两个感叹号替换原来的感叹号
最后报告进行了多少次替换。*/
#include<stdio.h>
int main()
{
    char ch;
    int cnt = 0;

    printf("Please enter(# to terminate): ");
    while ( (ch = getchar() ) != '#' )
    {
        if ( ch == '.' )
        {
            printf("!");
            cnt++;
        }
        else if ( ch == '!' )
        {
            printf("!!");
            cnt++;
        }
        else
        {
            printf("%c",ch);
        }
    }
    printf("\nThere are %d replacements.\n",cnt);

    return 0;
}
