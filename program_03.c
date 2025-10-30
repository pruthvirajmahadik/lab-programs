#include <stdio.h>
 int main() {
    int age ;
    float weight;
    char name [200];
    char gender;
    printf("Enter your name:\n ");
    scanf("%s", &name);
    printf("enter your age:\n");
    scanf("%d",&age);
    printf("enter your weight:\n");
    scanf("%f",&weight);
    printf("enter your gender:\n");
    scanf(" %c",&gender);
    printf("%d\n %f\n %s\n %c",name,age,weight,gender);
      
    return  0;


 }