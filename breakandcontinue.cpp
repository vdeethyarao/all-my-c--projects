#include <iostream>

int main(){
    for (int i = 1; i <= 20; i++){
        if ( i== 13){
            std::cout << "Unlucky number 13! \n";
            //break; OR

            continue;
        }
        std::cout << i << '\n';
    }
    return 0;
}