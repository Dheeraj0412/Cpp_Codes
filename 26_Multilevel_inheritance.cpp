#include<iostream>
using namespace std;

class student
{
    protected:
        int id;
    public:
        int set_rollno(int a);
        void get_rollno();
};

int student :: set_rollno(int a)
{
    id = a;
}

void student :: get_rollno()
{
    cout<<"The Roll number is :"<<id<<endl;
}

class exam : public student
{
    protected:
        float maths;
        float phy;
    public:
        float setmarks(float m,float p);
        void getmarks();
};

float exam :: setmarks(float m,float p)
{
    maths = m;
    phy = p;
}

void exam :: getmarks()
{
    cout<<"The marks obtained in maths :"<<maths<<endl;
    cout<<"The marks obtained in phy :"<<phy<<endl;
}

class result : public exam
{
    // protected:
    //     float percentage;
    public:
        void display(){
            get_rollno();
            getmarks();
            cout<<"Your percentage is :"<<(maths+phy)/2<<endl;
        }
};
 
main(){
    result ram;
    ram.set_rollno(101);
    ram.setmarks(98,92);
    ram.display();
    return 0;
}