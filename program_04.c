    #include <stdio.h>
int main(){
    char a;
    char word[200];
    char sentance[2000];
    printf("Enter a letter:\n");
    scanf("%c",&a);
    printf("Enter a word:\n");
    scanf("%s",word);
    printf("enter a sentance:\n");
   scanf(" %[^\n]s",sentance);
    printf("\n the letter is: %c\n the word is: %s\n the sentance is: %s",a,word,sentance);
    return 0;
}
