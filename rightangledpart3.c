#include <stdio.h>
void rightangledtriangle (int height){
    int i,k;
    for(i=1;i<=height;i++)
    {
        for(k=1;k<=i;k++)
        { 
            printf("*");
        }
        printf("\n");
    }
    
}


int main(){
    int height;
    printf("enter a height: ");
    scanf("%d",&height);
    rightangledtriangle(height);
}