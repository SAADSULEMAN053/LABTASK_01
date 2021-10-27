#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char food;
    int quantity;
    int total=0;
    int amount_pay=0;
    char term='y';
    char menu;
    printf("\nPress M to display the Menu: ");
    menu=getche();
while(term=='y'){

    printf("\n\n---MENU---\n");
    printf("__________\n\n");
    printf("B: Burger\n");
    printf("F: French Fries\n");
    printf("P: Pizza\n");
    printf("S: Sandwiches\n");
    printf("__________\n\n");
    again:
    printf("\nEnter the alphabet for the food you want: ");
    food=getche();
    printf("\nEnter the quantity for the food you want: ");
    scanf("%d",&quantity);

    switch(food)
    {
        case 'B':
        total=quantity*200;
        printf("\nKindly pay Rs.%d\n",total);
        amount_pay+=total;
        break;
        case 'b':
        total=quantity*200;
        printf("\nKindly pay Rs.%d\n",total);
        amount_pay+=total;
        break;
        case 'F':
        total=quantity*50;
        printf("\nKindly pay Rs.%d\n",total);
        amount_pay+=total;
        break;
        case 'f':
        total=quantity*50;
        printf("\nKindly pay Rs.%d\n",total);
        amount_pay+=total;
        break;
        case 'P':
        total=quantity*500;
        printf("\nKindly pay Rs.%d\n",total);
        amount_pay+=total;
        break;
        case 'p':
        total=quantity*500;
        printf("\nKindly pay Rs.%d\n",total);
        amount_pay+=total;
        break;
        case 'S':
        total=quantity*150;
        printf("\nKindly pay Rs.%d\n",total);
        amount_pay+=total;
        break;
        case 's':
        total=quantity*150;
        printf("\nKindly pay Rs.%d\n",total);
        amount_pay+=total;
        break;
        default:
        printf("\nEnter Correct alphabet for the food from the Menu\n");
        printf("\nPress Enter Key to Enter the Alphabet for the food again\n");
        getch();
        goto again;
    }
    printf("\nOR\n");
    printf("\nDo you want to order more? enter y for yes , n for no: ");
    term=getche();
}

     printf("\n\nYour total is Rs.%d, Please pay.\n\n",amount_pay);

    return 0;
}
