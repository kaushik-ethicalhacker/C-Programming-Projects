#include <stdio.h>
#include <time.h>
 int main()
 {
    int tries = 5;
    int guess;
    time_t t;
    srand ((unsigned) time(&t));
    int randomnumber = rand() %21;
    
    printf("This is a number guessing game.\nI have chosen a number between 0 to 20 which you must guess.\n");
    
    while(tries>0){
        printf("\nYou have %d tries left.\nEnter a guess: ",tries);
        scanf("%d",&guess);
        if (guess == randomnumber){
            printf("\nCongratulations. You guessed it!\n");
            break;
        }
        else if( guess < randomnumber){
            printf("\nSorry, %d is wrong. My number is greater than that.\n",guess);
            --tries;
        }
        else if( guess > randomnumber){
            printf("\nSorry, %d is wrong. My number is lesser than that.\n",guess);
            --tries;
        }
        else {
            printf("\nInvalid Input\n");
            --tries;
        }
        }
        if (tries == 0)
            printf("\nTries left = 0.\nThe number was %d.\nGame Over.\n",randomnumber);

        return 0;
        
 }