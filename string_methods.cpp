#include <iostream>

int main(){
    std::string name;

    std::cout <<"Enter your name: ";
    std::getline(std::cin, name);

    //if (name.length() > 12){
       // std::cout <<"Your name cant be longer that 12 characters.";
    //}
    //else{
        //std::cout <<"Welcome to the site!";
    //}
    
    /*if (name.empty()){
        std::cout <<"Your name cant be empty";
    }
    else{
        std::cout <<"Welcome to the site!";
    }*/
    
    /*name.clear();
        std::cout <<"Hello" << name;*/

    /*name.append ("@gmail.com");
    std::cout << "Your username is: " << name;*/

    //std::cout << name.at (2);

    /*name.insert (0,"Hello, ");
    std::cout << name;*/

    //std::cout << name.find ('e');

    name.erase (0, 3);
    std::cout << name;


    return 0;
    
}