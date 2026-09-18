#include <iostream>

int main(){
    std::string name = "John";
    double gpa = 3.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::cout << "Elements in grades: " << sizeof(grades)/sizeof(grades[0]) << " bytes\n";
    return 0;
}