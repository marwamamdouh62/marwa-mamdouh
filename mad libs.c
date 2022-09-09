#include <stdio.h>
int main()
{
    char name[20];
    char noun[20];
    char verb[20];
    printf("enter a name to complete the sentance: ");
    scanf("%s",name);
    printf("enter a noun to complete the sentance: ");
    scanf("%s",noun);
    printf("enter a verb to complete the sentance: ");
    scanf("%s",verb);
    printf("hey %s , how are you?", name);
    printf("I have a pain in my upper %s",noun);ahme
    printf("I am going to %s my tooth", verb);
}