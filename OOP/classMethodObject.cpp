#include <iostream>
#include <string>

using namespace std;

class Teacher{
    //propertiess
    public:
    string name;
    string dept;
    string subject;
    double salary;

    //member function / method
    public:
    void changeDept(string newDept){
        dept = newDept;
    }
};

int main(){
    //create object of class
    Teacher t1;
    t1.name = "John";
    t1.dept = "Science";
    t1.subject = "Physics";
    t1.salary = 50000;

    t1.changeDept("Math");
    cout << "Teacher Name: " << t1.name << endl;
    cout << "Teacher Department: " << t1.dept << endl;
    return 0;
}