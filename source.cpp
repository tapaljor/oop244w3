#include <iostream>
#include "account.cpp"

using std::cout;
using std::cin;
using std::endl;

int main() {

    Account a1(0, 0.0);

    int a{0};
    double b{0};

    cout << "Enter account: ";
    cin >> a;
    cout << "Enter balance: ";
    cin >> b;

    a1.setter(a, b);
    a1.getter();
    
    return 0;
}
