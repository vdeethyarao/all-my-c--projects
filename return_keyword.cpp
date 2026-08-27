#include <iostream>
/*double squarearea (double length);
double cubearea (double length);

int main(){

    double length = 8.5;
    double area = squarearea (length);
    double volume = cubearea (length);

    std::cout <<"area: " << area <<'\n';
    std::cout <<"volume: " << volume <<'\n';

    return 0;
}

double squarearea (double length){
    return length * length;
}

double cubearea (double length){
    return length * length * length;
}*/

std::string concatName(std::string firstname, std::string lastname);

int main(){
    std::string firstname = "deethya";
    std::string lastname = "rao";
    std::string fullname = concatName(firstname, lastname);
    return 0;
}
std::string concatName(std::string firstname, std::string lastname){
    std::string fullname = firstname + " " + lastname;
    return fullname;
}
