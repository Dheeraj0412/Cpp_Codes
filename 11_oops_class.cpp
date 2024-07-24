#include<iostream>
using namespace std;

class employee
{
private:
    int a,b,c;

public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }

};

void employee :: setdata(int a1,int b1,int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee ram;
    //ram.a = 11;  //this will throw error because 'a' is private!!
    ram.d = 55;
    ram.e = 42;
    ram.setdata(11,32,66);
    ram.getdata();
    
    return 0;
}