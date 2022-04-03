#include<restaurant_bill_generation_system.h>

/**
 * @brief function to take order from adult
 * @return test_values
 */

double orderForAdult()
{
     int menuOption,i,amount;
     char response = 'y';
     double totalPerPerson = 0.0,totalAllPerson = 0.0;
     double tax = 5.0;
     if(adultNumber <=0)
     printf("\n ");
     else
     printf("*\tadults:\n");
     for(i=0;i<adultNumber;i++)
     {
       printf("adult %d please enter your orders\n",i+1);
       while(response == 'y' || response == 'Y')
        {
            printf("please enter your option:");
            scanf("%d",&menuOption);
            if(menuOption<1 || menuOption>7)
            {
                printf("sorry we don`t have this order \nagain! ");
                continue;
            }
            printf("please enter your amount of order:");
            scanf("%d",&amount);
            totalPerPerson = totalPerPerson + (amount * price[menuOption - 1] );
            printf("\nWould you like to enter more orders(y/n):");
            scanf("\n%c",&response);
        }
            printf("\n");
            totalAllPerson += totalAllPerson +  totalPerPerson;
            totalPerPerson = 0.0;
            response = 'y';
     }
     return totalAllPerson + ((totalAllPerson * tax) / 100);
}
