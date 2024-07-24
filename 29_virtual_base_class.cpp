//Virtual base classes in C++ are used to prevent multiple instances of a given class from appearing in an inheritance hierarchy when using multiple inheritances

#include<iostream>
using namespace std;

class student
{
    protected:
        int id;
    public:
        int set_id(int a){
            id = a;
        }
        void display(){
            cout<<"ID is : "<<id<<endl;
        }
};

class test : virtual public student{
    protected:
        float maths,phy;
    public:
        int set_marks(float b,float c){
            maths = b;
            phy = c;
        }

        void get_marks(){
            cout<<"Maths marks are : "<<maths<<endl;
            cout<<"Phy marks are : "<<phy<<endl;
        }
};


class sports : virtual public student{
    protected:
        float score;
    public:
        int set_score(float d){
            score = d;
        }

        void get_score(){
            cout<<"Sports score are : "<<score<<endl;
        }
};

class result : public test,public sports{

    protected:
        float res;
    public:
        void get_result()
        {
            res = maths + phy + score;
            display();
            get_marks();
            get_score();
            cout<<"Result is :"<<res<<endl;
        }
};

int main(){
    result ram;
    ram.set_id(101);
    ram.set_marks(101,99);
    ram.set_score(10);
    ram.get_result();
}