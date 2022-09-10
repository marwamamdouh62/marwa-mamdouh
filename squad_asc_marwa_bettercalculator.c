#include <stdio.h>
int main(){
    float n2;
    float n1;
    char op;
    printf("enter the first number:  ");
    scanf("%f",&n1);
    printf("enter operation: ");
    scanf(" %c",&op);
    printf("enter the second number:  ");
    scanf("%f",&n2);

    if(op == '+')
    {
       printf("%f", n1+n2);
    } else if(op == '-')
    {
      printf("%f", n1-n2);
    }else if(op == '*')
    {
      printf("%f", n1*n2);
    }else if(op == '/')
    {
      printf("%f", n1/n2);
    }else {
        printf("invalid operation");
    }

}
