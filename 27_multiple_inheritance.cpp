//example of multiple inheritance two base class and one derived class!!   

#include<iostream>
using namespace std;

class study   //base_1
{
    protected:
        int hours;
    public:
        int sethours(int a);
        int gethours();
};

int study :: sethours(int a)
{
    hours = a;
}

int study :: gethours()
{
    return hours;
}

class sports   //base_2
{
    protected:
        int hour;
    public:
        int sethour(int a);
        int gethour();
};

int sports :: sethour(int a)
{
    hour = a;
}

int sports :: gethour()
{
    return hour;
}

class student : public study,public sports //derived by two base_1 and base_2 classess!!
{
    protected:
        int id;
    public:
        int setdata(int b);
        void display();
    
};

int student :: setdata(int b)
{
    id = b;
}

void student :: display()
{
    cout<<"The ID number of student is :"<<id<<endl;
    cout<<"Number of Hours he study :"<<gethours()<<endl;
    cout<<"Number of Hours he play sports :"<<gethour()<<endl;
}

int main(){
    student rohit;
    rohit.sethours(10);
    rohit.sethour(5);
    rohit.setdata(101);
    rohit.display(); 

    
    return 0;
}