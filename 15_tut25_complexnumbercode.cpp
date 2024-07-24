#include<iostream>
using namespace std;

class complex
{
    int a; //default private!!
    int b;

public: 
    
    void setdata(int v1,int v2){
        a = v1;
        b = v2;
    }

    void setdatasum(complex a1,complex a2)
    {
        a = a1.a + a2.a;
        b = a1.b + a2.b;
    }

    void display()
    {
        cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
    }    
};

int main(){
    
    complex c1,c2,c3;
    c1.setdata(5,10);
    c1.display();

    c2.setdata(3,4);
    c2.display();

    c3.setdatasum(c1,c2);
    c3.display();

    return 0;
}