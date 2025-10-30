#include    <stdio.h>
int main () {
    int n,r=0,s;
    printf("enter a number:\n");          
    scanf("%d",&n);
    s=n;
    while (n>0) {
    r=4*r+(n%10);
    


