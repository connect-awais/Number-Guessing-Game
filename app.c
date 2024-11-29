#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
void main()
{
    int guess,number,attempts=0;

    srand(time(0));
    number=rand()% 100+1;

    printf("\nWelcome to the number guessing Game!");
        printf("\nI have selected a number between 1 and 100!");

    do
    {
        printf("\n\nEnter your guess:");
        scanf("%d",&guess);
        attempts++;

        if(guess > number)
        {
            printf("The number is too high! Try Again!");
        }
        else if(guess < number)
        {
            printf("The number is too low! Try Again!");
        }
        
        else
        printf("\nCongratulations you have guessed the number!");
    }
    while(guess!=number);
    getch();
}