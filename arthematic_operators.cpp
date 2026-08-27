#include <iostream>

int main(){

    int students = 20;
    // we will be making  first 3 operations as comments so it doesnt interfere with code
 
    //students = students +1 ; OR 
    //students+= 1; OR
    //students++;

    //students = students - 2; OR
    //students-= 2; OR
    //students--;

    //students = students * 2; OR
    //students*=2;

    //students = students / 2; OR
    //students/=2;

    int remainder = students % 5;

    std::cout <<remainder;

    return 0;
}