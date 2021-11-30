#include <stdio.h>
#include <conio.h>
void check(char, char);
char a[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void show()
{
    printf("\n \n\n\t\t\t\t|-------|------|-------|\n");
    printf("\t\t\t\t|   %c   |   %c  |   %c   |\n", a[0], a[1], a[2]);

    printf("\t\t\t\t|-------|------|-------|\n");
    printf("\t\t\t\t|   %c   |   %c  |   %c   |\n", a[3], a[4], a[5]);

    printf("\t\t\t\t|-------|------|-------|\n");
    printf("\t\t\t\t|   %c   |   %c  |   %c   |\n", a[6], a[7], a[8]);

    printf("\t\t\t\t|-------|------|-------|\n\n");
}
void gameName()
{

    printf("\n\n\t\t\t\t\tTic-Toe Game\n\n");
}
void playerSymbol()
{
    printf("\n\n1st Player Symbol:X");
    printf("\n\n\n2nd Player Symbol:0\n");
}
void start()
{
    char pa;
    printf("\n \nEnter who have a first chance: First Player or Second Player\n");
    scanf("%c", &pa);
}
void play()
{
    char p, s;
    printf("\n\nEnter a position and a symbol\n");
    fflush(stdin);
    scanf("%c", &p);
    fflush(stdin);
    scanf("%c", &s);
    check(p, s);
}
void check(char P, char S)
{

    int i;
    for (i = 0; i <= 8; i++)
    {
        if (a[i] == P)
        {
            a[i] = S;
        }
    }
}
int end()
{
    if ((a[0] == 'x' && a[1] == 'x' && a[2] == 'x') || (a[0] == 'x' && a[3] == 'x' && a[6] == 'x') || (a[0] == 'x' && a[4] == 'x' && a[8] == 'x'))
        return (100);
    else if ((a[0] == '0' && a[1] == '0' && a[2] == '0') || (a[0] == '0' && a[3] == '0' && a[6] == '0') || (a[0] == '0' && a[4] == '0' && a[8] == '0'))
        return (200);
    else if (a[1] == 'x' && a[4] == 'x' && a[7] == 'x')
        return (100);
    else if (a[1] == '0' && a[4] == '0' && a[7] == '0')
        return (200);
    else if (a[2] == '0' && a[5] == '0' && a[8] == '0')
        return (200);
    else if (a[2] == 'x' && a[5] == 'x' && a[8] == 'x')
        return (100);
    else if (a[3] == '0' && a[4] == '0' && a[5] == '0')
        return (200);
    else if (a[3] == 'x' && a[4] == 'x' && a[5] == 'x')
        return (100);
    else if (a[6] == '0' && a[7] == '0' && a[8] == '0')
        return (200);
    else if (a[6] == 'x' && a[7] == 'x' && a[8] == 'x')
        return (100);
    else if (a[2] == '0' && a[4] == '0' && a[6] == '0')
        return (200);
    else if (a[2] == 'x' && a[4] == 'x' && a[6] == 'x')
        return (100);
    //     else if(a[7]=='0'&&a[4]=='0'&&a[1]=='0')
    //     return(200);
    //     else if(a[7]=='x'&&a[4]=='x'&&a[1]=='x')
    //     return(100);
    //     else if(a[8]=='0'&&a[5]=='0'&&a[2]=='0')
    //     return(200);
    //     else if(a[8]=='x'&&a[5]=='x'&&a[2]=='x')
    //     return(100);
    // else if(a[8]=='0'&&a[4]=='0'&&a[0]=='0')
    //     return(200);
    //     else if(a[8]=='x'&&a[4]=='x'&&a[0]=='x')
    //     return(100);
    return (300);
}
void main()
{
    char ch;
    int k;
labell:
    // clrscr();
    gameName();
    show();
    playerSymbol();
    start();
    play();

label:
    //  clrscr();
    show();
    play();

    k = end();
    //  clrscr();
    show();
    if (k == 100)
    {
        printf("Player 1 won:\n");
    }
    else if (k == 200)
    {
        printf("Player 2 won:\n");
    }
    else
        goto label;

    // printf("Do you want to continue the game: Enter y for yess and n or No\n\n");
    // fflush(stdin);

    // scanf("%d", &ch);
    // if (ch == 'y')
    // {
    //     a[0] = '1';
    //     a[1] = '2';
    //     a[2] = '3';
    //     a[3] = '4';
    //     a[4] = '5';
    //     a[5] = '6';
    //     a[6] = '7';
    //     a[7] = '8';
    //     a[8] = '9';

    //     // char a[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

        // printf("\n \n\n\t\t\t\t|-------|------|-------|\n");
        // printf("\t\t\t\t|   %c   |   %c  |   %c   |\n", a[0], a[1], a[2]);

        // printf("\t\t\t\t|-------|------|-------|\n");
        // printf("\t\t\t\t|   %c   |   %c  |   %c   |\n", a[3], a[4], a[5]);

        // printf("\t\t\t\t|-------|------|-------|\n");
        // printf("\t\t\t\t|   %c   |   %c  |   %c   |\n", a[6], a[7], a[8]);

        // printf("\t\t\t\t|-------|------|-------|\n\n");

    //     goto labell;
    // }
    getch();
}
