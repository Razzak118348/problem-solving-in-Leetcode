#include <iostream>
#include <string>
using namespace std;

class Teacher{
    private:
    double salary; // private property

    public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }
    void setSalary(double newSalary){
        salary = newSalary;
    }
    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "John";
    t1.dept = "Science";
    t1.subject = "Physics";
    t1.setSalary(50000); // set salary using setter method

    t1.changeDept("Math");
    cout << "Teacher Name: " << t1.name << endl;
    cout << "Teacher Department: " << t1.dept << endl;
    cout << "Teacher Salary: $" << t1.getSalary() << endl; // get salary using getter method
    return 0;
}