#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int width=20,height=20;
void draw()
{
    int i,j;
    for(i=0; i<width; i++)
    {
        for(j=0; j<height; j++)
        {
            if(i==0||i==height-1||j==0||j==width-1)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
}
int main()
{
    draw();
    getch();
}
