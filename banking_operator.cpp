#include <iostream>
#include <iomanip>

void showbalance (double balance);
double deposit ();
double withdraw (double balance);

int main(){
    double balance = 0;
    int choice;

    do {
        std::cout <<"********************\n";
        std::cout <<"Enter your choice: \n";
        std::cout <<"********************\n";
        std::cout <<"1. Show balance \n";
        std::cout <<"2. Deposit \n";
        std::cout <<"3. Withdraw \n";
        std::cout <<"4. Exit \n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);//not workin??????????????

        switch (choice){
            case 1:
                showbalance(balance);
                break;
            case 2:
                balance+= deposit();
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
    }while ( choice != 4);
}
void showbalance (double balance){
    std::cout <<"Your balance is " << std::setprecision(2) << std::fixed << balance <<"$ \n";

}
double deposit (){
    double amount = 0;
    std::cout <<"Enter the amount you would like to deposit: ";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout <<"Invalid amount \n";
        return 0;
    }
}
double withdraw (double balance){
    double amount = 0;
    std::cout <<"Enter the amount you would like to withdraw: ";
    std::cin >> amount;

    if (amount > balance){
        std::cout <<"Insufficient balance\n";
        return 0;
    }
    else if (amount < 0){
        std::cout <<"Invalid amount\n";
        return 0;
    }
    else {
        return amount;
    }
}


