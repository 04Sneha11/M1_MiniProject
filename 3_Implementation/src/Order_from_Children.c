#include<restaurant_bill_generation_system.h>

/**
 * @brief function to take order from Children
 * @return test_values
 */
double orderForChildren()
{
      int menuOption,i,amount;
      char response = 'y';
      double totalPerChild = 0.0,totalAllChildren = 0.0;
      double tax = 5.0,oneOrder;
      if(childNumber <=0)
          printf("\n");
      else
          printf("*\tChildren:\n");
      for(i=0;i<childNumber;i++)
        {
          printf("child %d please enter your orders\n",i+1);
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
                   oneOrder = (price[menuOption - 1] * 60)/100 ;//this one order for a child with discount %60 of one order of adult
                   totalPerChild = totalPerChild + (amount * oneOrder);
                   printf("Would you like to enter more orders(y/n):");
                   scanf("\n%c",&response);
            }
               totalAllChildren += totalAllChildren +  totalPerChild;
               response = 'y';
               totalPerChild = 0.0;
               printf("\n");
          }
return totalAllChildren + ((totalAllChildren * tax) / 100);
}
