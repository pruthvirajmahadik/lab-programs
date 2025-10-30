#include <stdio.h>
 int main(){
    int n,s=0,r=0,num;
    printf("enter a number:\n");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(num==s)
    {
        printf("%d is a palindrome number\n",num);
    }
    else
    {
        printf("%d is not a palindrome number\n",num);
    }
    return 0;
 }
 