#include <iostream>

int main(){

    int num;
    int guess;
    int tries;

    srand(time (NULL));

    num = (rand() % 100 ) + 1;

    std::cout << "******RANDOM NUMBER GUESSING GAME******* \n";

    do {
        std::cout <<"Please enter your guess betweeen (1-100):  ";
        std::cin >> guess;
        tries++;

        if (guess > num){
            std::cout << "Too high \n";
        }
        else if (guess < num){
            std::cout <<"Too low \n";
        }
        else{
            std::cout << "CORRECT!! you guessed the number in " << tries <<" tries \n";
        }

    }while (guess != num);

    std::cout << "Thanks for playing the game \n";

    return 0;
}