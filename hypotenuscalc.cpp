#include<iostream>
#include<cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout<< "enter the first side: ";
    std::cin>> a;

    std::cout<< "enter the second side: ";
    std::cin>> b;

    a = pow(a,2);
    b = pow(b,2);

    c = sqrt(a+b);
    std::cout<< "your hypotenus is: "<< c;

    return 0;

}