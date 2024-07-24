#include<iostream>
using namespace std;


class complex
{
private:
    /* data */
public:

    int a;
    int b;
    complex(int,int);  //construtor declaration
    void print()
    {
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex:: complex(int x,int y){    //This is a paramneterized constructor as it take parameter!!
    a = x;
    b = y;
}

int main(){
    //implicit call
    complex v(10,11);
    
    //explicit call
    complex e = complex(11,100);

    v.print();
    cout<<endl;
    e.print();
    return 0;
}