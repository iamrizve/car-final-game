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
    printf("\n\t\t   Player 1 symbol :x:\n");
    printf("\n\t\t   Player 2 symbol :0:\n");
}
int main()
{
    system("cls");
    gameName();
    show();
    inputSymbol();
    getch();
}
