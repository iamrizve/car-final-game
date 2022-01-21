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
    for(i=0; i<9; i++)
    {
        if(a[i]==P)
        {
            a[i]=S;
        }
    }
}
int end()
{
    if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x'))
        return 100;
    else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[0]=='0'&&a[4]=='0'&&a[8]=='0'))
        return 200;
    else if(a[0]=='x'&&a[4]=='x'&&a[7]=='x')
        return 100;
    else if(a[0]=='0'&&a[4]=='0'&&a[7]=='0')
        return 200;

    else if(a[3]=='x'&&a[5]=='x'&&a[8]=='x')
        return 100;
    else if(a[3]=='0'&&a[5]=='0'&&a[8]=='0')
        return 200;
    else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
        return 100;
    else if(a[2]=='0'&&a[4]=='0'&&a[6]=='0')
        return 200;
    else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
        return 100;
    else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
        return 200;

    return 300;
}

int main()
{
    int k;
    char ch;

lavel2:

    system("cls");
    gameName();
    show();
    inputSymbol();
    start();
    play();

lavel:
    system("cls");
    show();
    play();
    k=end();
    system("cls");
    show();

    if(k==100)
        printf("\nplayer 1 win ");
    else if(k==200)
        printf("\nplayer 2 win ");
    else
        goto lavel;

    printf("\npress y for play again or press n for exit\n");
    scanf("%c",&ch);

    if(ch=='y'||ch=='Y')
    {
        a[0]='1';
        a[0]='2';
        a[0]='3';
        a[0]='4';
        a[0]='5';
        a[0]='6';
        a[0]='7';
        a[0]='8';
        a[0]='9';

        goto lavel2;
    }


    getch();
}
