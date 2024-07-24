#include<iostream>
using namespace std;

// same with can work with functions syntax same as of class!!

//class template with multiple parameter.

template <class t1, class t2=char> //default parameter
class c
{
    public:
        t1 data1;
        t2 data2;
        c(t1 a,t2 b)
        {
            data1 = a;
            data2 = b;
        }

        void display()
        {
            cout<<data1<<","<<data2<<endl;
        }
};

int main(){

    c <int> obj(2,'r');
    obj.display();
    
    return 0;
}


/*if we make a two function overloading one with int parameter and one with template now if we invoked the fn with give integer value so so, exact match takes highest priority means function with parameter int will be running!!*/