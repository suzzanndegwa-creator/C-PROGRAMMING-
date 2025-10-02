//simple c program
/*
Name:Ndegwa Susan
Reg No:CT101/G/26435/25
Description:Water company charges
*/

#include<stdio.h>
  int main(){
  // main function
    int water_units_used,Total_bill;
//Propmts for the user to input
   printf("Enter water units used:\n");
   scanf("%d",&water_units_used);

//Computatation of total bill based on some conditions
   if (water_units_used<=30){
    Total_bill=water_units_used * 20;
   }

   else if (water_units_used>30 & water_units_used<=60){
    Total_bill =water_units_used * 25;

   }

   else if (water_units_used>60){

   Total_bill =water_units_used * 30;
   }
   printf("Enter the Total bill:\n");
   printf("%d",Total_bill);
   return 0;
   }
