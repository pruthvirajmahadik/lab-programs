#include <stdio.h>
   int main (){
    // declare the variables
     int a, b,c,max;
    //  get the three numbers from user
     printf("enter three numbers:\n");
     scanf("%d %d %d",&a,&b,&c);    
    //  find the maximum number
     max=(a>b)?(a>c?a:c):(b>c?b:c);
     // print the maximum number
     printf("the maximum number is :%d",max);
     return 0;
        
   }