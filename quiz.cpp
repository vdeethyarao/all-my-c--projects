#include <iostream>

int main(){

    std::string questions[] = {"1. Who invented C++?",
                              "2. Which object is used to print output to the screen in C++?",
                              "3. Which symbol is used to end a statement in C++?",
                              "4. How do you write a single-line comment in C++?"};

    std::string options[][4] = {{"A) Dennis Ritchie", "B) Bjarne Stroustrup", "C) James Gosling", "D) Guido van Rossum"},
                               {"A) cin", "B) cout", "C) print", "D) output"},
                               {"A) :", "B) .", "C) ;", "D) ,"},
                               {"A) #", "B) /*", "C) //", "D) <!--"}};

    char answerKey[] ={'B', 'B', 'C', 'C', 'B' };

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i= 0; i <size; i++){
        std::cout <<"**********************************\n";
        std::cout << questions[i] <<'\n';
        std::cout <<"**********************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] <<'\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout <<"correct\n";
            score++;
        }
        else{
            std::cout <<"WRONG\n";
            std::cout <<"The answer is "<< answerKey[i] <<'\n';
        }
    }

    
    return 0;


}