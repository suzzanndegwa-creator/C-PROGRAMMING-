//simple c program
/*
Name:Ndegwa Susan
Reg No:CT101/G/26435/25
Description:Student eligibility for exams
*/

int main(){

   int attendance,average_marks;

   printf("Enter your attendance:");
   scanf("%d",&attendance);

   printf("Enter your average_marks:");
   scanf("%d",&average_marks);

   //check eligibility
   if(attendance >=75&average_marks>=40) {
   printf("you are eligible."); 
   }

    else {
       printf("Not eligible.");
    }

  return 0;

}

