/*编写程序读取输入，读到 # 停止，报告出现ei的次数。
注意：该程序要记录一个字符和当前字符。用"Receive your eieio award"这样的输入来测试。*/
#include<stdio.h>
int main()
{
    char ch,ch_pre = 0;  //ch_pre为前一个字符
    int cnt = 0;

    printf("Please enter(# to terminate): ");
    while ( (ch = getchar()) != '#' )
    {
        if ( ch_pre == 'e' && ch == 'i' )
        {
            cnt++;
        }
        ch_pre = ch;  //把当前字符赋给ch_pre
    }
    printf("'ei' appeared %d times.\n",cnt);
    
    return 0;
}
