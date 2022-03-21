#include "banking_record_system.h"

/*
    Class: User Function
*/
void Account::create_account() {
    std::cout << "Enter a username: ";
    std::cin >> username;

    std::cout << "Enter a password: ";
    std::cin >> password;

    std::cout << "Enter your first name: ";
    std::cin >> first_name;

    std::cout << "Enter your last name: ";
    std::cin >> last_name;

    std::cout << "Enter your account number: ";
    std::cin >> account_number;

    std::cout << "Enter your initial deposit: $";
    std::cin >> account_balance;

    std::cout << std::endl;
}

void Account::show_account_info() {
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Account number: " << account_number << std::endl;
    std::cout << "Account balance: $" << account_balance << std::endl;
    std::cout << std::endl;
}

void Account::show_account_balance() {
    std::cout << "Account balance: $" << account_balance << std::endl;
    std::cout << std::endl;
}

void Account::deposit() {
    std::cout << "How much would you like to deposit today? \n" 
              << "$";
    std::cin >> money_deposit;
    
    std::cout << "You have deposited: $" << money_deposit << std::endl;
    std::cout << "Your old balance is: $" << account_balance << std::endl;

    account_balance = account_balance + money_deposit;
    std::cout << "Your new balance is: $" << account_balance << std::endl;
    std::cout << std::endl;
}

void Account::withdraw() {
    std::cout << "How much would you like to withdraw today? \n" 
              << "$";
    std::cin >> money_withdraw;
    
    std::cout << "You have withdrawn: $" << money_withdraw << std::endl;
    std::cout << "Your old balance is: $" << account_balance << std::endl;

    account_balance = account_balance - money_withdraw;
    std::cout << "Your new balance is: $" << account_balance << std::endl;
    std::cout << std::endl;
}

void Account::close_account() {

}
/* 
    Class: System function 
*/
void Account::user_options() {
    std::cout << "Bank Record System - MAIN MENU\n"
              << "[1]. Create account.\n"
              << "[2]. Show account information.\n"
              << "[3]. Show account balance.\n"
              << "[4]. Deposit.\n"
              << "[5]. Withdraw.\n"
              << "[6]. Close account.\n"
              << "[7]. Exit.\n";
}




/*
//User options
        void create_account();          //read data
    void close_account();           //delete data
    void show_account_info();       //show data
    void show_account_balance();    //show data
    void deposit();                 //edit data
    void withdraw();                //edit data

//System function
    void prompt_options();
    void read_file();
    void write_file();
    void search_file();
    void edit_file();
    void delete_file();
*/

/*
    Main function
*/

int main() {

    Account user;

    bool run = true;
    char option;

    while (run) {
        user.user_options();
        std::cin >> option;

        switch (option) {
            case '1': //create account
                user.create_account();
                break;
            case '2': //show account information
                user.show_account_info();
                break;
            case '3': //show account balance
                user.show_account_balance();
                break;
            case '4': //deposit
                user.deposit();
                break;
            case '5': //withdraw
                user.withdraw();
                break;
            case '6': //close account
                user.close_account();
                break;
            case '7':
                run = false;
                break;
            default:
                std::cout << "ERROR: Invalid option. Please try again . . .\n" 
                          << std::endl;
                break;
        }
    }
    
    
    system("pause");

    return 0;
}