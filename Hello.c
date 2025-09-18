/*
*Program to evaluate face values of card
*Released under the Vegas Public License
*(c)2014 The College Blackjack team
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char card_name;
    printf("Enter the card_name: ");
    scanf("%c", &card_name);
    int val;
    if (card_name == 'K'){
        val = 10;
    } else if (card_name == 'Q'){
        val = 10;
    } else if (card_name == 'J'){
        val = 10;
    } else if (card_name == 'A'){
        val = 11;
    } else {
        val = 0;
    }
    printf("The card value is: %d\n", val);
    return 0;
}