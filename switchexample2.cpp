#include<iostream>

int main(){
    char grade;
    
    std::cout<<"enter your grade from (A-F): ";
    std::cin>> grade;

    switch(grade){
        case 'A':
            std::cout<< "You did great!"<< '\n';
            break;
        case 'B':
            std::cout<< "You did well!"<< '\n';
            break;
        case 'C':
            std::cout<< "You passed."<< '\n';
            break;
        case 'D':
            std::cout<< "You barely passed" << '\n';
            break;
        case 'F':
            std::cout<< "You failed." << '\n';
            break;
        default:
            std::cout<<"Please enter a valid grade (A-F).";
         }
    return 0;
}