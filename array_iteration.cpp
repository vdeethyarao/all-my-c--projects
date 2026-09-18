#include <iostream>
int main (){
    std::string students [] = {"spongebob", "patrick", "sandy", "squidward", "mr.krabs"};
    for ( int i = 0; i < sizeof(students)/sizeof(students[0]) ;i++){
        std::cout << students[i] << std::endl;
    }
    return 0;
}