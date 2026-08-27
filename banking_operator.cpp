#include <iostream>

void showbalance (double balance);
void deposit ();
void withdraw (double balance);

do (int main(){

    double balance = 0;
    int choice;

    std::cout <<"********************\n";
    std::cout <<"Enter your choice: \n";
    std::cin >> choice;
    std::cout <<"********************\n";
    std::cout <<"1. show balance \n";
    std::cout <<"2. deposit \n";
    std::cout <<"3. withdraw \n";
    std::cout <<"4. exit \n";

    switch (choice){
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance += deposit();
            showbalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            std::cout <<"Thank you for visiting!\n";
            break;
        default:
            std::cout <<"Invalid choice!\n";
    }

})while ( choice != 4);

}
