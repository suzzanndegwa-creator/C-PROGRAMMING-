//simple c program
/*
Name:Ndegwa Susan
Reg No:CT101/G/26435/25
Description:volume and surface area of a cylinder
*/
#include<stdio.h>

int main(){

float radius,height,volume,surface_area;
//prompt user for input
printf("Enter radius of the cylinder:");
scanf("%f",&radius);

printf("Enter height of the cylinder:");
scanf("%f",&height);

//calculate volume and surface_area using the exact formula
     volume=3.141598*radius*radius*height;
        surface_area=2*3.14159*radius*radius+2*3.14159*radius*height;
        //display results
        printf("Volume of the cylinder:%.2f cubic units\n",volume);
        printf("Surface area of the cylinder:%.2f square units\n",surface_area);
   return 0;
}
