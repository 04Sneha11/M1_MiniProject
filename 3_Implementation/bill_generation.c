#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "bill.h"

double price[7] = {15.80, 10.50, 19.00, 14.00, 12.00, 22.00, 16.00};
double mealTaxPrices[7];
int adultNumber, childNumber;

int main()
{
    int i;
    char response = 'y';
    printMeals();
    double totalAllPerson = 0.0, totalAllChildren = 0.0;
    int items[100], item_count[100], count = 0;
    while (response == 'y' || response == 'Y')
    {
        printf("please enter number of adults  :");
        scanf("%d", &adultNumber);
        printf("please enter number of children:");
        scanf("%d", &childNumber);

        for (i = 0; i < adultNumber; i++)
        {
            printf("adult %d please enter your orders\n", i + 1);
            while (response == 'y' || response == 'Y')
            {
                printf("please enter your option:");
                scanf("%d", &items[count]);
                if (items[count] < 1 || items[count] > 7)
                {
                    printf("sorry we don`t have this order \nagain! ");
                    continue;
                }
                printf("please enter your amount of order:");
                scanf("%d", &item_count[count]);
                printf("\nWould you like to enter more orders(y/n):");
                scanf("\n%c", &response);
                count++;
            }
            printf("\n");
            totalAllPerson += totalAllPerson + orderForAdult(price, items, item_count, count);
            count=0;
            response = 'y';
        }
        count=0;
        for (i = 0; i < childNumber; i++)
        {
            printf("child %d please enter your orders\n", i + 1);
            while (response == 'y' || response == 'Y')
            {
                printf("please enter your option:");
                scanf("%d", &items[count]);
                if (items[count] < 1 || items[count] > 7)
                {
                    printf("sorry we don`t have this order \nagain! ");
                    continue;
                }
                printf("please enter your amount of order:");
                scanf("%d", &item_count[count]);
                printf("Would you like to enter more orders(y/n):");
                scanf("\n%c", &response);
                count++;
            }
            totalAllChildren += totalAllChildren + orderForChildren(price, items, item_count, count);
            response = 'y';
            count = 0;
            printf("\n");
        }

        orderMeals(adultNumber, childNumber, totalAllPerson, totalAllChildren);

        printf("\nwould you like to continue(y/n):");
        scanf("\n%c", &response);
    }
    printf("\n******************** THANKS FOR DINING HERE  *************************\n");
    printf("\20********************** PLEASE VISIT AGAIN  **************************\20 \n");
    system("pause");
    return 0;
}