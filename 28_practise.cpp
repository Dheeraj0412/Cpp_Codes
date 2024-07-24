//making simple calculator and scientific calculator using oops_inheritance!!

#include<iostream>
#include<cmath>
using namespace std;

class sim_calc       //calc values of add,sub,div,multiple.
{
    protected:
        float num_1;
        float num_2;
    public:
        float add,sub,div,mul;
        float setdata(float a,float b);
        void calc();
        void getdata();

};

float sim_calc :: setdata(float a,float b)
{
    num_1 = a;
    num_2 = b;
}

void sim_calc :: calc()
{
    add = num_1 + num_2;
    sub = num_1 - num_2;
    div = num_1 / num_2;
    mul = num_1 * num_2;
}

void sim_calc :: getdata()
{
    cout<<"Addition of this two numbers is :"<<add<<endl;
    cout<<"subtraction of this two numbers is :"<<sub<<endl;
    cout<<"division of this two numbers is :"<<div<<endl;
    cout<<"product of this two numbers is :"<<mul<<endl;
}

class sci_calc           
{
    protected:
    float deg_1,deg_2;
    public:
        float degree_1,degree_2,sum;
        float setdata1(float a,float b);
        void calcs();
        void display();

};

float sci_calc :: setdata1(float a,float b)
{
    deg_1 = a;
    deg_2 = b;
}

void sci_calc :: calcs()
{
    degree_1 = sin(deg_1);
    degree_2 = cos(deg_2);
    sum = sinf(deg_1) + cosf(deg_2);
}

void sci_calc :: display()
{
    cout<<"The value of sin("<<deg_1<<") is :"<<degree_1<<endl;
    cout<<"The value of cos("<<deg_2<<") is :"<<degree_2<<endl;
    cout<<"The value of sin("<<deg_1<<") + "<<" cos("<<deg_2<<") is :"<<sum<<endl;
}

class hybrid : public sim_calc,public sci_calc
{
    public:
        void print();
};

void hybrid :: print()
{
    getdata();
    cout<<endl;
    display();
}

int main(){
    float m,n,p,q;
    cout<<"Enter the first Number :"<<endl;
    cin>>m;
    cout<<"Enter the second Number :"<<endl;
    cin>>n;

    // sim_calc num1;     //single run
    // num1.setdata(m,n);
    // num1.calc();
    // num1.getdata();

    cout<<"Enter the degree(30,60,90,180...) no.1 :"<<endl;
    cin>>p;
    cout<<"Enter the degree(30,60,90,180...) no.2 :"<<endl;
    cin>>q;

    // sci_calc num2;     //single run
    // num2.setdata1(p,q);
    // num2.calcs();
    // num2.display();

    hybrid c;             //invoked by multiple inheritance.
    c.setdata(m,n);
    c.calc();
    c.setdata1(p,q);
    c.calcs();
    c.print();

    return 0;
}