#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "order_for_adult.h"

double orderForAdult(double price[], int items[], int item_count[], int count)
{
    int menuOption, i;
    char response = 'y';
    double totalPerPerson = 0.0;
    double tax = 5.0;
    for (i = 0; i < count; i++)
    {
        totalPerPerson = totalPerPerson + (item_count[i] * price[items[i] - 1]);
    }
    return totalPerPerson + ((totalPerPerson * tax) / 100);
}
