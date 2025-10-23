/*
Name:Ndegwa Susan  Mumbi
Reg No:CT101/G/26435/25
Description:C function to calculate fare
*/
#include<stdio.h>
//function declaration
int fare(int Km);
int main(){
int result,Km;
printf("Enter  number of kilometer:\n");
scanf("%d",&Km);
 //function call
 result=fare(Km);
 printf("fare=kes%d\n",result);
 return 0;
 }
 //function definition
 int fare(int Km){
 int F;
 F=50*Km;
 return F;


 }




