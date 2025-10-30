#include <stdio.h>
 int main (){
    char name[2000];
    int rollnumber ;
    int maths ;
    int physics ;
    int chemistry ;
    int total;
    float average;
    printf("Enter your name:\n ");
    scanf("%[^\n]", &name);
    printf("enter your rollnumber:\n");
    scanf("%d",&rollnumber);
    printf("enter your marks in maths:\n");
    scanf("%d",&maths);
    printf("enter your marks in physics:\n");
    scanf("%d",&physics);
    printf("enter your marks in chemistry:\n");
    scanf("%d",&chemistry);
    total=maths+physics+chemistry;
    average= total/3;
    printf("name: %s\n rollnumber: %d\n total marks: %d\n average: %d",name,rollnumber,total,average);
    if (average>=70)
    {
        printf("\ndistinction");

    }
    else if (average>=60)
    {
        printf("\nfirst class");
    }
    else if (average>=50)
    {
        printf("\nsecond class");
    }
    else if (average>=40)
    {
        printf("\npass");
    }
    else 
    {
        printf("\nfail");
    }
    return 0;
}