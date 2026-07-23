#include <iostream>
#include <string>
using namespace std;

//normal constructor
/*
class Teacher{
    public:
        Teacher(string n, string sub,int ag,string dept, string mail){
            name = n;
            subject = sub;
            age = ag;
            department = dept;
            email = mail;

        }
        string name;
        string subject;
        int age;
        string department;
        string email;

        void getTeacher(){
cout<<"name: "<<name<<endl;
cout<<"subject: "<<subject<<endl;
cout<<"age: "<<age<<endl;
cout<<"department: "<<department<<endl;
cout<<"email: "<<email<<endl;
        }
};

int main(){
    Teacher t1("Razzak","Science",25,"CSE","razzak.ar.hstu@gmail.com");
    t1.getTeacher();

}
*/


//using this keyword in constructor

class Employee{
private:
double salary;
    public:
        string name;
        string designation;
        int age;
        string email;
        Employee(string name, string designation, int age, string email, double salary){
            this->name = name;
            this->designation = designation;
            this->age = age;
            this->email = email;
            this->salary = salary;
        }


        void getEmployee(){
            cout<<"name: "<<name<<endl;
            cout<<"designation: "<<designation<<endl;
            cout<<"age: "<<age<<endl;
            cout<<"email: "<<email<<endl;
            cout<<"salary: "<<salary<<endl;
        }

        //custom copy constructor
        Employee(Employee &orginal_object){
            cout<< "This is custom copy constructor for employee"<<endl;
            this->name=orginal_object.name;
            this->age= orginal_object.age;
            this->designation=orginal_object.designation;
            this->salary=orginal_object.salary;
            this->email=orginal_object.email;
        }

};

int main(){
    Employee e1("Razzak","Software Engineer",25,"razzak.ar.hstu@gmail.com",50000);
    e1.getEmployee();

    Employee e2(e1);//copy constructure
    e2.getEmployee();
}


