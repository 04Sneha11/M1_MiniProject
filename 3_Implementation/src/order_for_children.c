#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include "order_for_children.h"

double orderForChildren(double price[], int items[], int item_count[], int count)
{
    int menuOption,i,amount;
    char response = 'y';
    double totalPerChild = 0.0,totalAllChildren = 0.0;
    double tax = 5.0,oneOrder;
    for(i=0;i<count;i++){
        oneOrder = (price[items[i] - 1] * 60)/100 ;//this one order for a child with discount %60 of one order of adult
        totalPerChild = totalPerChild + (item_count[i] * oneOrder);
    }
    return totalPerChild + ((totalPerChild * tax) / 100);
}
