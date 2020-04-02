/*使用switch重写练习4。*/
#include<stdio.h>
int main()
{
    char ch;
    int cnt = 0;

    printf("Please enter(# to terminate): ");
    while ( (ch = getchar() ) != '#' )
    {
        switch (ch)
        {
        case '.':
            printf("!");
            cnt++;
            break;

        case '!':
            printf("!!");
            cnt++;
            break;
            
        default :
            printf("%c",ch);
            break;
        }
    }
    printf("\nThere are %d replacements.\n",cnt);

    return 0;
}
