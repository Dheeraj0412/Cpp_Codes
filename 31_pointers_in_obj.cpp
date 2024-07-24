#include<iostream>
using namespace std;

class complex
{
    int r,i;
    public:
        int setdata(int a,int b){
            r=a;
            i=b;
        }

        void getdata(){
            cout<<"real part is :"<<r<<endl;
            cout<<"imaginary part is :"<<i<<endl;
        }
};

int main(){

    //complex c1;

    // complex *ptr = &c1;
    // (*ptr).setdata(2,4);
    // (*ptr).getdata();

    //complex *ptr = new complex;    //using new keyword
    //(*ptr).setdata(2,4); //is exactly same as
    //ptr->setdata(2,4);   //arrow pointer
    //(*ptr).getdata(); //is exactly same as
    //ptr->getdata();

    //array of objects
    complex *ptr1 = new complex[3];
    (ptr1+1)->setdata(2,4);   //this will point to next object in array like ptr1 agr 0 pe h toh ptr+1 hoga 1 pe.
    (ptr1+1)->getdata();

    return 0;
} 
