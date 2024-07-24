#include<iostream>
using namespace std;

class base
{
    int data1;  //private by default and cant be inherited
    public:
        int data2;
        int data3;
        int getdata1();
        int getdata2();
        void setdata();
};

void base :: setdata(void){
    data1 = 10;
    data2 = 20;
}

int base :: getdata1(){
    return data1;
}

int base :: getdata2(){
    return data2;
}

class derived : public base  //class is being derived publicily!!
{
    int data3;
    public:
        void process();
        void display(); 
};

void derived :: process(){
    data3 = data2 * getdata1();  //data1 isliye nhi likha kyuki vo base class m private m h direct access nhi kr skte!!.
}

void derived :: display(){
    cout<<"value of data1 : "<<getdata1()<<endl;
    cout<<"value of data2 : "<<data2<<endl;
    cout<<"value of data3 : "<<data3<<endl;
}

int main(){
    derived der;
    der.setdata();   //can be used because visibility = public!!
    der.process();
    der.display();
    
    return 0;
}