//encapsulation is wrapping up of data and functions(methods) into a single unit called class. It is one of the fundamental concepts of OOP(Object Oriented Programming). It is used to hide the internal representation, or state, of an object from the outside. This is called data hiding.

#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
    double balance; // private property
    string password; // private property


    public:
    string accountId;
    string username;

    void setBalance(double newBalance){
        balance = newBalance;
    }
    double getBalance(){
        return balance;
    }
};
int main(){
    Account account;
    account.accountId = "AC001";
    account.username = "Alice";
    account.setBalance(5000.00);

    cout << "Account ID: " << account.accountId << endl;
    cout << "Username: " << account.username << endl;
    cout << "Balance: " << account.getBalance() << endl;

}