#include <iostream>
using namespace std;

int main() {
    int house = 10;
// home = Variable

//  address of home = Address => &

//  the address which is writen in a paper is = Pointer => *

    int *paper = &house;

    cout << "house value = " << house << endl;
    cout << "house address = " << &house << endl;
    cout << "paper (address) = " << paper << endl;
    cout << "value using *paper = " << *paper << endl;

    *paper=40;
 cout << "house value after change the *paper value = " << house << endl;

    return 0;
}
