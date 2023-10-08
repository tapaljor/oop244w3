#include <iostream>
#include "account.h"

using std::cout;
using std::cin;
using std::endl;

/*constructor */
Account::Account(int a, double b) {
    accountNumber = a;
    balance = b;
}

/*functiond defitions starts with class name then ::*/
void Account::setter(int a, double b) {
    accountNumber = a;
    balance = b;
}
void Account::getter() const {
    cout << "Account: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
}
