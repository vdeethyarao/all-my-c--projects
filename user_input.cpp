#include <iostream>

int main(){
    std::string name;
    int age;

    std::cout <<"what is your full name: " << '\n';
    std::getline(std::cin ,name);

    std::cout <<"how old are you :" << '\n';
    std::cin >> age;
    

    std::cout <<"hello " << name <<'\n';
    std::cout <<"you are "<< age<< " years old";

    return 0;
}