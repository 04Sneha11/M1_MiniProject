#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "order_meals.h"

double orderMeals(int adultNumber, int childNumber, double totalPriceForAdult, double totalPriceForChildren)
{
    // double totalPriceForAdult, totalPriceForChildren;
    double allPayment, discount;
    printf("                      \t\t**** ORDER MENUE****\n");
    allPayment = totalPriceForAdult + totalPriceForChildren;
    printf("\n \t\t     \22**************************************\22    \n");
    printf(" \t\t   ******************  final BILL   *******************     \n");
    printf(" \t\t\tadult/child\tcount\t\ttotal price\n");
    printf(" \t\t\tadults\t\t%d\t\t%5.2f\n", adultNumber, totalPriceForAdult);
    printf(" \t\t\tchildren\t%d\t\t%5.2f\n", childNumber, totalPriceForChildren);
    printf(" \t\t\tTotal bill\t\t\t%5.2f\n", allPayment);
    if (allPayment < 10)
        discount = ((allPayment * 0.5) / 100);
    else if (allPayment >= 10 && allPayment < 20)
        discount = ((allPayment * 1) / 100);
    else if (allPayment >= 20 && allPayment < 30)
        discount = ((allPayment * 1.5) / 100);
    else if (allPayment >= 30 && allPayment < 40)
        discount = ((allPayment * 2.0) / 100);
    else
        discount = ((allPayment * 5.0) / 100);
    printf(" \t\t\tTotal bill after discount\t%5.2f\n", allPayment - discount);
    return (allPayment - discount);
}
