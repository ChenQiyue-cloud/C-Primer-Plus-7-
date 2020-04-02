/*编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行数和
其他所有字符的数量。*/
#include<stdio.h>
int main()
{
    char ch;
    int n_space = 0,n_newline = 0,n_others = 0;

    printf("Please input(# to terminate): ");
    while ( (ch = getchar() ) != '#' )
    {
        if ( ch == '\n' )
        {
            n_newline++;
        }
        else if ( ch == ' ' )
        {
            n_space++;
        }
        else
        {
            n_others++;
        }
    }
    printf("space = %d,\tnewline = %d,\tothers = %d.\n",n_space,n_newline,n_others);

    return 0;
}
