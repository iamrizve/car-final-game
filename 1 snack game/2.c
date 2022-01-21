#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    while(1)
    {
        if(kbhit())
        {
            ch=getch();
            printf("\n\ncharrecter is = %c",ch);
              break;
        }
        else
        {
            printf("hello");
        }



    }
     getch();
}
