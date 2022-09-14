#include <stdio.h>
#include <stdlib.h>
#include <math.h>'

struct Shape    //struct to determine the shape and its height
{
    int height;
    char symbol;
};

void drawcircle(int r) //Merna and Aya
{
    int i,k;

    for (i=0; i<(2*r+1); i++)
    {
        for (k=0; k<(2*r+1); ++k)
        {
            if(pow(i-r,2)+pow(k-r,2) <= pow(r,2)+1)
            {
                printf("*");  //if point is inside circle print *
            }
            else
            {
                printf(" "); //if point outside circle print space
            }
            printf(" ");
        }
        printf("\n");

    }
}


void square (int h) //Raneem
{
    int i,j;
    for(j=0; j<h; j++)
    {
        for(i=0; i<h; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
}


void triangle (int height) //Marwa
{
    int i,k;
    for(i=1; i<=height; i++)
    {
        for(k=1; k<=i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

}

void pyramid(int h) //Aya
{
    int i,j;
    for(i=1; i<=h; i++)
    {
        for(j=1; j<=2*h-1; j++)
        {
            if(j >=h-(i-1)&& j<= h+(i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void main() //Rawan
{
    struct Shape shape;
    printf("Enter letter of shape you want (Circle - Square - Triangle - Pyramid): ");
    scanf(" %c",&shape.symbol);
    printf("Enter height/diameter: ");
    scanf("%d",&shape.height);
    if(shape.height <=0) //to check validity of height
        printf("Invalid height");
    else
    {
        switch(shape.symbol)
        {
        case 'c': case'C':
            drawcircle(shape.height/2);
            break;
        case 'S': case's':
            square(shape.height);
            break;
        case 'T': case't':
            triangle(shape.height);
            break;
        case 'P': case'p':
            pyramid(shape.height);
            break;
        default:
            printf("Invalid letter"); //when user inputs an invalid character

        }
    }

}
