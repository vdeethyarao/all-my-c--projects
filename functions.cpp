#include <iostream>

void happyBirthday(std::string name, int age); //declaration of the void function

int main(){
    std::string name = "deethya";
    int age = 18;
    happyBirthday(name, age); //calling of the void function in main funtion

    return 0;

}

void happyBirthday(std::string name, int age){ //definition of the void function
    std::cout <<"Happy birthday " << name << '\n';
    std::cout <<"Happy birthday " << name << '\n';
    std::cout <<"Happy birthday dear " << name << '\n';;
    std::cout <<"Happy birthday " << name << '\n';
    std::cout <<"You are " << age << " today!" << '\n';
}
