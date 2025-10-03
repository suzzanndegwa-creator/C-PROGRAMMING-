//simple c program
/*
Name:Ndegwa Susan
Reg No:CT101/G/26435/25
Description:loan eligibility
*/
#include<stdio.h>

int main(){

    int age,income;

  //get user input

  printf("Please enter your age:");
  scanf("%d",&age);

  printf("Enter your annual income in shillings:");
  scanf("%d",&income);


    //eligibility criteria
    if(age>=21&income>=21000){
    printf("Congratulations you qualify for the loan\n");}
    else{
    printf("Unfortunately we are unable to offer you the loan at this time/n");}

    return 0;

}
