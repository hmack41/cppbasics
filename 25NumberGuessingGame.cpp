#include <iostream>

int main(){
    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num = (rand() % 10)+1;
    guess = 0;
    tries = 0;
//my code

    while(num!=guess) {
    std::cout << "Guess the number! : ";
    std::cin >> guess;
    tries++;
    }
    std::cout << "Guessed Correctly!\n";
    std::cout << "It took you " << tries << " tries\n";
    
//brocode's code

    num = (rand() % 100)+1;
    guess=0;
    tries=0;
do{
    std::cout << "Enter a guess between (1-100): ";
    std::cin >> guess;
    tries++;
    if(guess > num){
        std::cout << "Too high!\n";
    }
    else if (guess < num){
        std::cout << "Too low!\n";
    }
    else{
        std::cout << "Correct! # of tries: " << tries << "\n";
    }
}while(guess != num);
    


    return 0;
}