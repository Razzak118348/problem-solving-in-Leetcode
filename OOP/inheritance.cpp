#include <iostream>
#include <string>
using namespace std;

class Person{

    public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
       cout<<"this is parent constructor called"<<endl;
    }
};

//public inheritance
class Student: public Person{
// name ,age, inherite from person class
public:

int rollno;
Student(string name, int age, int rollno): Person(name, age){
    this->rollno=rollno;
}
void getinfo(){
    cout<<"this is child constructor called for student"<<endl;
    cout<<"name :"<<name<<endl;
    cout<<"age :"<<age<<endl;
    cout<<"rollno :"<<rollno<<endl;
}
};


//private inheritance
// class Employee: private Person{
// // name ,age, inherite from person class
// public:
// int salary;

// Employee(string name,int age,int salary):Person(name,age){
//     this->salary=salary;
// }
// void getinfo(){
//     cout<<"this is child constructor for employee"<<endl;
//     cout<<"name :"<<name<<endl;
//     cout<<"age :"<<age<<endl;
//     cout<<"salary: "<<salary<<endl;
// }};

class Employee: public Person{
// name ,age, inherite from person class
public:
int salary;

Employee(string name,int age,int salary):Person(name,age){
    this->salary=salary;
}
void getinfo(){
    cout<<"this is child constructor for employee"<<endl;
    cout<<"name :"<<name<<endl;
    cout<<"age :"<<age<<endl;
    cout<<"salary: "<<salary<<endl;
}};

//multilevel inheritance
class Manager:public Employee{
public:
string HeadOfBranch;
Manager(string name,int age,int salary,string HeadOfBranch):Employee(name,age,salary){
    this->HeadOfBranch=HeadOfBranch;
}
void getinfo(){
   cout<<"name :"<<name<<endl;
    cout<<"age :"<<age<<endl;
    cout<<"salary: "<<salary<<endl;
    cout<<"head of branch: "<<HeadOfBranch<<endl;
}
};
int main(){
    Student s1("razzak", 25, 1);
    //first call parent class and then call child class
    s1.getinfo();

    Employee e1("Karim", 30, 50000);
    e1.getinfo();
    // cout<<e1.name; //this is error because public class is privately inherited;
    Manager m1("Rohim",30,70000,"Dhaka");
    m1.getinfo();


}