/*
Name:Ndegwa Susan Mumbi
Reg No:CT101/G/26435/25
Description:C function to convert to celcius
*/
#include<stdio.h>
float celcius(float F);
int main(){
float result,F;
printf("Enter Fareinheit:\n");
scanf("%f",&F);

//function call
result=celcius(F);
printf("The celcius is =%2f\n",result);
return 0;
}
//function declaration
float celcius (float F){
float c;
c=(F-32)*5/9;
return c;
}





