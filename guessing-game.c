#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void instructions(){
    printf("===========================================================\n");
    printf("         WELCOME TO THE NUMBER GUESSING GAME !!!              \n");
    printf("===========================================================\n");
    printf("       I have hidden a random number between 1 to 100         \n");
    printf("      Will you be able to guess? Go ahead! try your luck!      \n\n\n");
}

int guess_game(int num1, int sec_num) {
    if (num1==sec_num){
        return 1;
    }
    else if (num1>sec_num){
        return 0;
    }
    else {
        return -1;
    }
}



int main(){
    instructions();
    srand(time(0));
    int rand_int=(rand()%100)+1;

    int guess;
    int attempts=0;
    int game_status=0;

    while (game_status!=1) {
        printf("Enter your guess:\n");
        scanf("%i",&guess);
        game_status=guess_game(guess,rand_int);
        attempts++;
        if (game_status==0){
            printf("guessing too high! try again.\n\n");
        } else if (game_status==-1){
            printf("guessing too low! try again.\n\n");
        }
    }
    printf("congrats! you guessed it\n");



    return 0;
}
