/**
 * @file main.c
 * @author Sneha.S.R (srsneha90@gmail.com)
 * @brief
 * @version 20.03
 * @date 2022-03-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include"restaurant_bill_generation_system.h"

/**
 * @brief main function of the project
 *
 * @return int
 */
int main()
{
     char response = 'y';
     printMeals();
     while(response == 'y'|| response == 'Y')
    {
            printf("please enter number of adults  :");
            scanf("%d",&adultNumber);
            printf("please enter number of children:");
            scanf("%d",&childNumber);
            orderMeals();
            printf("\nwould you like to continue(y/n):");
            scanf("\n%c",&response);
    }
printf("\n******************** THANKS FOR DINING HERE  *************************\n");
printf("\20********************** PLEASE VISIT AGAIN  **************************\20 \n");
system("pause");
return 0;
}

