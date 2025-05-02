//Use switch-case to display Salaam when user enters 1, 
//Aadaab when user enters 2, Hello when user enters 3 and
//Incorrect Option when user enters any other number
#include<stdio.h>
int main (){
int choice;
printf("enter a numbers(1,2 or3)=");
scanf("%d",&choice);
switch(choice){
case 1:
printf("AA\n");
break;
case 2:
printf("aadab\n");
break;
case 3:
printf("hello\n");
break;
default:
printf("incorrect option\n");
break;
}

    return 0;
}