#include <stdio.h>
int main(){
    int secretnum = 2;
    int guess;
    int count=0;
    int limit=3;
    int outofguesses=0;

    while(guess!=secretnum && outofguesses==0)
    {
        if(count<limit){
            printf("enter a number: ");
            scanf("%d",&guess);
            count++;
        }else {
            outofguesses=1;
        }
    }
    if(outofguesses==1){
        printf("Out of guesses");
    }else{
        printf("YOU WIN!");
    }
}