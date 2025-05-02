//use if-else with relational and logical operators(grading according 
//to percentage of a students)
#include<stdio.h>
int main(){
float percentage;
printf("Enter your percentage =");
scanf("%f",&percentage);
if(percentage >= 90 && percentage <= 100){
    printf("Grade:A\n");
}
else if(percentage >= 80 && percentage <90) {
    printf("Grade:B\n");
}            
else if(percentage >= 70 && percentage <80){
    printf("Grade:C\n");
}
else if(percentage >= 60 && percentage <70){
    printf("Grade:D\n");
}
else if(percentage >= 50 && percentage <60){
    printf("Grade:E\n");
}
else if(percentage >=0 && percentage <50) {

    printf("grade:F(fail)\n");
   }     
   else {
    printf("invalid percentage entered");
   }                  

    return 0;
}