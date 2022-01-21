#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    for(int i=0; i<10; i++)
    {
        int a=rand()%20;
        printf("%d\n",a);
    }

    getch();
}
