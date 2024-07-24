/*case 1:
class b : public a{
    order of execution of construtor -- first a and then b
}

class b : public a,public c{
    order of execution of construtor -- first a and then c and b
}

class b : public a, virtual public c{
    order of execution of construtor -- first c and then a and b
}*/
#include<iostream>
using namespace std;

class base1
{
    int a;
    public:
        base1(int A){
            a = A;
            cout<<"base1 constructor called"<<endl;
        }

        void print1(){
            cout<<"value of base1 :"<<a<<endl;
        }
};

class base2
{
    int b;
    public:
        base2(int B){
            b = B;
            cout<<"base2 constructor called"<<endl;
        }

        void print2(){
            cout<<"value of base2 :"<<b<<endl;
        }
};

class base3
{
    int c;
    public:
        base3(int C){
            c = C;
            cout<<"base3 constructor called"<<endl;
        }

        void print3(){
            cout<<"value of base3 :"<<c<<endl;
        }
};

class derived : public base2, public virtual base3, public base1 //order yaha main h
{
    int der1,der2;
    public:
        derived(int a,int b,int c,int d,int e) : base1(a), base2(b),base3(c) //yaha nhi!!
        {
            der1 = d;
            der2 = e;
            cout<<"derived constructor called"<<endl;
        }

        void dprint(){
            print1();
            print2();
            print3();
            cout<<"value of derived class :"<<der1<<","<<der2<<endl;
            
        }

};

int main(){
    derived rohan(4,5,3,2,1);
    rohan.dprint();

}