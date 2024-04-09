#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int value[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
int main(void)
{
    string player1 = get_string("Player 1: ");
    string player2 = get_string("Player 2: ");
    int value_player1=0;
    int value_player2=0;
    for(int i = 0, player1_length = strlen(player1);i<=player1_length;i++){
        int check = toupper(player1[i]);
        if(value[toupper(player1[i])-65]>=0&&value[toupper(player1[i])-65]<=25){
            value_player1 += value[toupper(player1[i])-65];
        }
    }
    for(int i = 0, player2_length = strlen(player2);i<=player2_length;i++){
        int check = toupper(player2[i]);
        if(value[toupper(player2[i])-65]>=0&&value[toupper(player2[i])-65]<=25){
            value_player2 += value[toupper(player2[i])-65];
        }

    }
    printf("%i\n",value_player1);
    printf("%i\n",value_player2);
    if(value_player1 > value_player2){
        printf("Player 1 wins!\n");

    }
    else if(value_player1 < value_player2){
        printf("Player 2 wins!\n");

    }
    else{
        printf("Tie\n");
    }

}
