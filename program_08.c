#include <stdio.h>
    int main (){
         float u,d,a;
         int t;
         printf("enter the value of acceleration:\n");
            scanf("%f",&a);
           printf("enter the value of initial velocity:\n");
            scanf("%f",&u);
            printf ("enter the value  of time :\n");
            scanf("%d",&t);
            d=(u*t)+(0.5*a*t*t)/2;
            printf("the   distance is :%.4f",d);
            return 0;
    }
