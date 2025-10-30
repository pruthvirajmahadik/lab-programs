#include <stdio.h>
 int main () {
    int n,count =0;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(int a =1; a<=n; a++){
        if(n%a==0){
            count++;
        }
    }
    if(count==2){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
    return 0;
 }