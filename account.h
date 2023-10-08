#include <iostream>
using std::cout;

class Account {
private:
    int accountNumber;
    double balance;
public:
    void setter(int a, double b);
    void getter() const;
    /*constructor and destrucotr*/
    Account(int a, double b);
    ~Account() {
        cout << "Destroyer doing its thing";
    }
};