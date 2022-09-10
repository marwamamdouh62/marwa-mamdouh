#include <stdio.h>
int main()
{
    float x;
    float y;
    float z; 
    printf("enter the first number: ");
    scanf("%f",&x);
    printf("enter the second number: ");
    scanf("%f",&y);
    print2f("enter the third number: ");
    scanf("%f",&z);
    printf("the sum is: %f",x+y+z);
    printf("the average is: %f",(x+y+z)/3);
}
