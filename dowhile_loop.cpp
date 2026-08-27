#include <iostream>

int main (){

    int number;

    do{
        std::cout<< "Please enter a positive number: ";
        std::cin>> number;
    }while ( number < 0);

    std::cout<< "You entered: " << number;


    return 0;

}