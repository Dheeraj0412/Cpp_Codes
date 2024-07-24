#include<iostream>
using namespace std;

class number
{
private:
    int a;
public:
    number(){  //default constructor
        a = 0;
    }

    number(int num){
        a = num;
    }

//imp-----when no copy constructor is found, then complier supplies its own copy constructor eg. object n5

    number(number &obj){
        cout<<"Copy Constructor Called!!"<<endl;
        a = obj.a;
    }

    void print(){
        cout<<"the number is :"<<a<<endl;
    }
};


int main(){

    number n1,n2(12),n5;
    n1.print();       //as n1 value not given so default constructor runs!!
    n2.print();

    number n3(n1);  //copy constructor invoked
    n3.print();

    n5 = n1;         //copy constructor not called!!
    n5.print();

    number n4 = n2;
    n4.print();      //copy constructor invoked
    
    
    return 0;
}