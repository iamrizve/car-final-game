#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int width=20,height=20,gameOver;
int x,y,fruitX,fruitY,score;
void setup()
{
    gameOver=0;

    x=width/20;
    y=height/20;

label1:
    fruitX=rand()%20;
    if(fruitX==0)
        goto label1;

label2:
    fruitY=rand()%20;
    if(fruitY==0)
        goto label2;

}
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
