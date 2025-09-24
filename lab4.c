#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int order = 0;
    int time = 0;
    double cost = 0.0;
    int wait=0;
    printf("WELCOME TO FIIFI'S ICE CREAM SHOP.\nWhat would you like to order?\n");
    do{
        int flavour = 0;
        int topping = 0;
        int size = 0;
        printf("1-Vanilla\n2-Strawberry\n3-Chocolate\n4-Mango\n5-Enquires\n");
        scanf("%d", &flavour);
        printf("1-small\n2-large\n");
        scanf("%d", &size);
        //The flavour and the size doing the most
        if(flavour==1||flavour==2||flavour==3||flavour==4){
            if(size==1||size==2){
                if(size == 1){
                    wait = wait +2;
                }else if(size == 2){
                    wait = wait +3;
                }
                if(flavour == 1 && size == 1){
                    printf("You ordered a small vanilla ice cream.");
                    cost = cost + 5;
                    printf("\nWaiting time: %d minutes", wait);
                }else if(flavour == 2 && size == 1){
                    printf("You ordered a small strawberry ice cream.");
                    cost = cost + 5;
                    printf("\nWaiting time: %d minutes", wait);
                }else if(flavour == 3 && size == 1){
                    printf("You ordered a small chocolate ice cream.");
                    cost = cost + 6;
                    printf("\nWaiting time: %d minutes", wait);
                }else if(flavour == 4 && size == 1){
                    printf("You ordered a small mango ice cream.");
                    cost = cost + 7;
                    printf("\nWaiting time: %d minutes", wait);
                }else if(flavour == 1 && size == 2){
                    printf("You ordered a large vanilla ice cream.");
                    cost = cost + 8;
                    printf("\nWaiting time: %d minutes", wait);
                }else if(flavour == 2 && size == 2){
                    printf("You ordered a large strawberry ice cream.");
                    cost = cost + 8;
                    printf("\nWaiting time: %d minutes", wait);
                }else if(flavour == 3 && size == 2){
                    printf("You ordered a large chocolate ice cream.");
                    cost = cost + 9;
                    printf("\nWaiting time: %d minutes", wait);
                }else if(flavour == 4 && size == 2){
                    printf("You ordered a large mango ice cream.");
                    cost = cost + 10;
                    printf("\nWaiting time: %d minutes", wait);
                }
            }else{
                printf("\nInvalid size entry\n");
            }
        }else if(flavour == 5){
            printf("\nA customer service agent will be with you soon\n");
        }else{
            printf("\nInvlid flavour entry.\n");
        }
        //The process of the toppings
        int toppings = 0;
        do{
            printf("\nWhat toppings would you lie with your order?\n");
            printf("\n1-Sprinkles\n2-Whipped Cream\n3-Chopped Nuts\n4-Coconut Shavings\n");
            scanf("%d", &topping);
            if(topping==1||topping==2||topping==3||topping==4){
                if(topping==1){
                    printf("\nYour selected topping is Sprinkles");
                    cost = cost + 2;
                    wait = wait + 1;
                    printf("\nWaiting time: %d minutes", wait);
                }else if(topping=2){
                    printf("\nYour selected topping is Whipped Cream");
                    cost = cost + 3;
                    wait = wait + 1;
                    printf("\nWaiting time: %d minutes", wait);
                }else if(topping=3){
                    printf("\nYour selected topping is Chopped Nuts");
                    cost = cost + 4;
                    wait = wait + 1;
                    printf("\nWaiting time: %d minutes", wait);
                }else if(topping=4){
                    printf("\nYour selected topping is Coconut Shavings");
                    cost = cost + 5;
                    wait = wait + 1;
                    printf("\nWaiting time: %d minutes", wait);
                }
                toppings = 0;
            }else if (topping == 5){
                toppings = 1;
            }else{
                printf("\nInvalid topping entry");
            }

        }while(toppings>0);
        int choice =0;
        printf("\nWould you like anything else?\n1-Yes\n2-No\n");
        scanf("%d", &choice);
        if (choice == 1){
            order++;
        }else if(choice ==2){
            order=0;
            printf("\nYour total cost is GHc%.2f", cost);
            printf("\nWaiting time: %d minutes", wait);
        }
    }while(order>0);
    printf("\nKindly wait for your order.\n");
    int i;
    for(i=(wait*60); i>0;i--){
        printf("%d\n", i);
        sleep(1);

    }
    printf("\nHere is your order\n Thanks for coming to Fiifi's Ice Cream");
    return 0;
}