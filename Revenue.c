/*
Name: Ndegwa Susan Mumbi
Reg No:CT101/G/26435/25
Description:The revenue
*/
#include<stdio.h>
   int main(){
      int revenue[7];
      float total_revenue=0;
      float average_revenue;

      printf("Enter the revenue for each of the 7 days:\n");
       int i=0;i<7;i++;{
      printf("Day%d:",i+1);
      scanf("%d",&revenue[i]);
      total_revenue=revenue[i];
      }
      average_revenue=total_revenue/7;
      printf("Total revenue in a week:%.2f\n",total_revenue);
      printf("Average revenue in a day:%.2f\n",average_revenue);
      return 0;
       }
