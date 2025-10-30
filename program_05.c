#include <stdio.h>
int main(){
    int a,b;
    printf ("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("\n using  bit operato on %d & %d :%4d",a,b,a&b);
    printf("\nusing bit operatoron %d &%d: %4d",a,b,a^b);
    printf("\n using bit operator left shift on %d:%4d",a,a<<1);
   printf("\n using bit operator rigth shift on %d:%4d",b,b>>1);
   printf("\n using bit operator (~)%d:%4d",a,~a);
    return 0;


}