#include <iostream>

int main(){

    int temp;
    char unit;

    std::cout << "*************Temperature convertor*************"<<'\n';
    std::cout << "F = fahrenheit"<<'\n';
    std::cout << "C = celsius"<<'\n';
    
    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit;

    if(unit== 'F'|| unit== 'f'){
        std::cout << "Enter the temperature in celsius: ";
        std::cin >> temp;

        temp =(1.8*temp) +32;
        std::cout << "Temperature in fahrenheit is: " << temp <<'\n';
    }

    else if ( unit=='C'|| unit=='c'){
        std::cout << "Enter the temperature in fahrenheit: ";
        std::cin>> temp;

        temp = (temp- 32)/1.8;
        std::cout<< "Temperature in celsius is: "<<temp <<'\n';
    }

    else{
        std::cout <<"Please enter a valid unit either C or F" <<'\n';
    }

    std::cout<< "***********************************************";

    return 0;
 
}