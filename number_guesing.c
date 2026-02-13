#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int number=rand()%100;
    printf("guess a number between (1 to 99):\n");
    int guess=-1;
    int count=0;
    while(number!=guess){
        scanf("%d",&guess);
        count++;
        if(number>guess){
            printf("guess the greater number:\n");
        }else if(number<guess){
            printf("guess the smaller number:\n");
        }else{
            printf("congratulations!,you guessed the number in %d attempts",count);
        }

    }
    return 0;
}

