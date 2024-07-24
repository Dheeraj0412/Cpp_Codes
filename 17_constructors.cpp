#include<iostream>
using namespace std;

//constructor is a special member function with the same name as of the class
//it is use to initialize the objects  of its class
//it is automatically invoked(run) when an object is created

class complex
{
private:
    /* data */
public:

    int a;
    int b;
    complex(void);  //construtor declaration
    void print()
    {
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex:: complex(void){    //function body and this is a default constructor as it takes no parameters.
    a = 10;
    b = 2;
    cout<<"hello world";
}

int main(){
    complex v;
    v.print();
    return 0;
}

/*properties of constructors

-it should be declared in the public of section of class
-they cannot return values and do not have any return types
-we cannot refer to their address   */


//overloading construtor - can create more construtor but with different parameters!!