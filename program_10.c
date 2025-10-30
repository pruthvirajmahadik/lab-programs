#include<stdio.h>
#include<math.h>
int main(){
    double num,root;
    printf("enter the number:\n");
    scanf("%lf",&num);
    root=sqrt(num); 
    printf("the square root of %.2lf is %.2lf",num,root);   
    return 0;
}
