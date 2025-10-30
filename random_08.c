#include <stdio.h>
int main(){
    int i, j, k, n;
    printf("Enter n value:\n ");
    if (scanf("%d",&n) != 1) return 1;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i+1;j--)
            printf(" ");
        for(k=1;k<=i;k++)
        {
            printf("*");                
        }   
        printf("\n");
    }
    return 0;
}
