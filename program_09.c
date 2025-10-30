#include <stdio.h>
#include <math.h>
int main(){
    float principal,rate,time,si,ci;
    printf ("enter the value of principal:\n");
    scanf("%f",&principal);
    printf("enter the value of rate:\n");
    scanf("%f",&rate);
    printf("enter the value of time:\n");
   scanf("%f",&time);
   printf("the simple interest is :%.2f\n",si=(principal*rate*time)/100);
   printf("the compound interest is :%.2f",ci=principal*(pow((1+rate/100),time)-1));
    return 0;

    

}
  