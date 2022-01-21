#include<stdio.h>
#include<conio.h>
char a[9]= {'1','2','3','4','5','6','7','8','9'};
void gameName()
{
    printf("\n\n\t\t      Tic Tac Toe Gmae \n");
}
void show()
{
    printf("\n\n\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
    printf("\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
    printf("\t\t\t---|---|---\n");
    printf("\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
    printf("\t\t\t---|---|---\n");
}
void inputSymbol()
{
    printf(" Player 1 symbol :x:\n");
    printf(" Player 2 symbol :0:\n");
}
void start()
{
    char pa;
    printf("\n enter who will start the game player 1 or player 2\n");
    scanf("%c",&pa);
}
void play()
{
    char p,s;//p=position s=symbol;
    printf("Enput position and symbol for the player\n");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    cheak(p,s);
}
void cheak(char P,char S)
{
    int i;
    for(i=0;i<8;i++)
    {
        if(a[i]==P)
        {
            a[i]=S;
        }
    }
}

int main()
{
    system("cls");
    gameName();
    show();
    inputSymbol();
    start();
    play();
    getch();
}
