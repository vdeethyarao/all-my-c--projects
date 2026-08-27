#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;
    
    std::cout<<"***********CALCULATOR**********"<<'\n';

    std::cout<<"Enter either (+ - * /): ";
    std::cin>>op;

    std::cout<< "Enter num1: ";
    std::cin>> num1;

    std::cout<< "Enter num2: ";
    std::cin>> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout<< "Addition of given numbers is: "<< result<<'\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout<< "subtraction of given numbers is: "<< result<<'\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout<< "Multiplication of given numbers is: "<< result<<'\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout<< "Division of given numbers is: "<< result<<'\n';
            break;
        default:
            std::cout<<"Please enter a valid operator: ";
    
    }
    std::cout<<"*********************"<<'\n';
    return 0;

}
