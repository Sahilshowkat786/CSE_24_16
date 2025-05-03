// roots of Q.equation
#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,D,r1,r2,realpart,imagpart;
printf("enter cofficients of a,b and c =");
scanf("%f%f%f",&a,&b,&c);
D = b*b - 4*a*c;
if (D>0){
    r1 = (-b + sqrt(D))/(2*a);
    r2 = (-b - sqrt(D))/(2*a);
    printf("Roots are real and different\n");
    printf("Root 1 =%.2f\n",r1);
    printf("Root 2 =%.2f\n",r2);                        
}
else if (D==0){
    r1 = r2 = -b/(2*a);

    printf("Roots are real and equal\n");
    printf("Root 1 =%.2f\n",r1);
    printf("Root 2 =%.2f\n",r2);
}
else{
    realpart = -b/(2*a);
    imagpart =sqrt(-D)/(2*a);
    printf("Roots are complex and imaginary\n");
    printf("Root 1 =%.2f + %.2fi\n",realpart,imagpart);
    printf("Root 2 =%.2f - %.2fi",realpart,imagpart);
}


    return 0;
}