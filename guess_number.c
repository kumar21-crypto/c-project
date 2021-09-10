// number gussing game

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void guess_machine(int a,int b,int count);

void main()
{
    printf("note : entered number must below under 100 ,you have only 7 chance to win this number guessing game  ");

    int num,count=0;
    int guess_num;

    srand(time(0));
    num = rand()%100;
    printf("%d\n",num);

    do
    {
        
    printf("enter your guessed number : ");
    scanf("%d",&guess_num);

    count++;

    guess_machine(guess_num, num,count);


    } while (count<7);
    

}

void guess_machine(int a, int b,int count)
{

    if (a > b)
    {
        printf("your number is greater\n");
        printf("you have %d chance left\n",7-count);
    }
    else if (a < b)
    {
        printf("your number is smaller\n");
        printf("you have %d chance left\n",7-count);
    }
    else {
        printf("congrats you win in %d round \n",count);
        exit(0);
    }
    
    

}