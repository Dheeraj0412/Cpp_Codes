#include<iostream>
using namespace std;

class base
{
    public:
        int var_b = 35;
        virtual void display(){  //virtual function base class m bane se ab display() derived class ka invoke hoga!!
            cout<<"1_Displaying Base class var :"<<var_b<<endl;
        }
};

class derived : public base
{
    public:
        int var_d = 40;
        void display(){
            cout<<"2_Displaying Base class var. :"<<var_b<<endl;
            cout<<"2_Displaying derived class var :"<<var_d<<endl;
        }
};

int main(){
    base *base_pointer;
    base obj_b;
    derived obj_d;

    base_pointer = &obj_d; //base pointer pointing towards derived class
    base_pointer->display();

    return 0;
}