#include <stdio.h>
int main()
{
    int value;
    char arr[20][20]= {               "        *",
                                   "      * * *" ,
                               "    * * * * *",
                            "  * * * * * * * ",
                            "* * * * * * * * *" };
    printf("enter the height value: ");
    scanf("%d",&value);
    if (value>=2&&value<=5)
    {for(int i=0;i<=value-1;i++)
    {
        printf(" \n%s", arr[i]);
      
    }}else {
        printf("invaled");
    }

}
