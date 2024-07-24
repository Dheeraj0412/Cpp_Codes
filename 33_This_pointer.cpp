#include<iostream>
using namespace std;

class n
{
    int a;
    public:
        int setdata(int a)
        {
            //THIS pointer, points to the object for which the member function is called.

            //a=a; //it will give garbage value. (expicilt invoked)
            this->a=a; //using this pointer (implicit invoked)
        }
        
        void getdata(){
            cout<<"value is :"<<a<<endl;
        }
};

int main(){
    n a;
    a.setdata(3).getdata();  //we can type this also as by using 'this' pointer the program invoked impicilt
    //a.getdata();
    return 0;
}