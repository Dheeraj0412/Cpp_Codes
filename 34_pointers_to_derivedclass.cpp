#include<iostream>
using namespace std;

class base
{
    public:
        int var_b;
        void display(){
            cout<<"Displaying Base class var :"<<var_b<<endl;
        }
};

class derived : public base
{
    public:
        int var_d;
        void display(){
            cout<<"Displaying Base class var. :"<<var_b<<endl;
            cout<<"Displaying derived class var :"<<var_d<<endl;
        }
};

int main(){
    base *base_pointer;
    base obj_b;
    derived obj_d;

    base_pointer = &obj_d; //base pointer pointing towards derived class

    base_pointer->var_b = 55;
    base_pointer->display();  //base_pointer derived class ko point kr rha h phr bhi display pr base class ka hi function call horha h!!! kyuki yahi default behaviour h but but agr derived ka display function invoked krna h toh base ke display function ko virtual bana badhega for this check out 35.cpp

    //base_pointer->var_d = 34; //will throw an error

    derived *der_pointer;

    der_pointer = &obj_d;

    der_pointer->var_d = 34;
    der_pointer->var_b = 123; //will not throw an error
    der_pointer->display();
    
    return 0;
}