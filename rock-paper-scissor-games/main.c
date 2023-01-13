#include<stdlib.h>
#include<time.h>
#include <stdio.h>

   

int game(char player,char computer)
{
    if(player == computer)
    return 0;
    else if(player == 'r'&&computer == 's')
    return 1;
    else if(player == 's'&&computer == 'r')
    return -1;
    else if(player == 'p'&&computer == 's')
    return -1;
    else if(player == 'r'&&computer == 'p')
    return -1;
    else if(player == 's'&&computer == 'p')
    return 1;
    else if(player == 'p'&&computer == 'r')
    return 1;
}
int main()
{
     srand(time(0));
    int randomnum =  rand()%100;
    char player,computer;
    if(randomnum <33)
    computer = 'r';
    else if(randomnum>33&&randomnum<66)
    computer = 's';
    else
    computer = 'p';
    printf("please enter rock(r) paper (p) scissors (S)");
    scanf("%c",&player);
    if(game(player,computer)==0)
    printf("draw");
    else if(game(player,computer)==-1)
    printf("computer wins");
    else
    printf("player wins");
    return 0;
}
