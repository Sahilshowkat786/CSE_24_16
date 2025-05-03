#include<stdio.h>
int main(){
double num1,num2;
char op,ch;
do {
printf(" select operation use (+,-,*,/) =");
scanf(" %c", &op); // add space left side of %c   ,   add space &
 

printf("enter two numbers =");
scanf("%lf%lf",&num1,&num2);

switch (op)
{
case '+':
printf("sum of two numbers is %.2lf\n",num1+num2);
break;
case '-':
printf("difference of two numbers is %.2lf\n",num1-num2);
break;
case '*':
printf("multiplication of two numbers is %.2lf\n",num1*num2);
break;
case '/':
if(num2 !=0){
printf("division of two numbers is %.2lf\n",num1 / num2);}
else{
    printf("division by zero is not allowed\n");}
    break;
    default:
    printf("enter a valid operation\n");
}
printf("press y to continue =");
scanf(" %c", &ch);  // add space otherwise error
} while (ch =='y'||ch =='Y');

    return 0;
}