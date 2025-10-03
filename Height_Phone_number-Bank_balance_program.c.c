//simple c program
/*
Name:Susan Ndegwa
Reg No:CT101/G/26435/25
Description:Height,bank balance,phone number
*/
#include<stdio.h>

 int main(){

    float height;
    double bankbalance ;
    char phonenumber;

    //prompt the user to input height
   printf("Enter height:");
   scanf("%f",&height);

   //prompt for bank balance
   printf("Enter your bank balance:$");
   scanf("%lf",&bankbalance);

   //prompt for phone number
   printf("Enter your phone number:");
   scanf("%s",&phonenumber);

   return 0;


 }
