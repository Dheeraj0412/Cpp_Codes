#include<iostream>
using namespace std;

//baseclass
class employee
{
public:
    int id;
    int salary;
    employee(){}
    employee(int a){
        id = a;
        salary = 1000;
    }
    void print(void){
        cout<<id<<endl;
        cout<<salary<<endl;
    }
};

//derived class syntax!!
/*class derived_class_name : Visibility_mode base_class_name
{
    code
}*/

/*Note.
1. default visibility mode is private
2. public visibility mode = public members of base class become public members of derived class
2. private visibility mode = public members of base class become private members of derived class
4. private members are never inherited*/

//creating a derived class
class programmer : public employee
{
    public:
        int lang;
        programmer(int p){
            id = p;              //to inherit id in derived class it must be in public in base class
            lang = 123;
        }
        void show(void){
            cout<<id<<endl;
            cout<<lang<<endl;
        }
};



int main(){
    employee a(1),b(45);
    // cout<<a.salary<<endl;
    // cout<<b.salary<<endl;

    a.print();
    b.print();
    programmer p1(500);
    // cout<<p1.id<<endl;
    // cout<<p1.lang<<endl;
    p1.show();

    return 0;
}