/*
Name:Ndegwa Susan Mumbi
Reg No:CT101/G/26435/25
Description:C function to calculate electricity bill
Date:23rd October 2025
*/

#include<stdio.h>
  int main(){
  //function declaration
  int calculate_electric_bill(int units);

    int units,bill;
      printf("Enter number of units used:\n");
      scanf("%d",&units);

      //function call
      bill=calculate_electric_bill(units);

      printf("total electric bill=Ksh. %d\n",bill);
      return 0;
      }

    //function definition

    int calculate_electric_bill(int units)
    {

    int bill;

    if(units<=100){
    bill=units*10;
    }
    else if(units<=200){
    bill=(100*10)+((units-100)*15);
    }
    else(units>200);{
        bill=units*20;
    }
    return bill;
    }






