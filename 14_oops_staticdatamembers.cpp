#include<iostream>
using namespace std;

/*static funs dusre static fn or static variable hi use kr skte h agr variable yah function static nhi huha toh error throw kregaa!!*/

class employee
{
private:
    int id;
    //without static variable se har object ka apna count hogaa jis se valuable same hogi 

    //int count=0;  //garage value aahegi isliye syntax int count=0

    //using static variable se har object ke liye count shared hojahegaa
    static int count;      //count is a static data member
public:
    void setdata()
    {
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata()
    {
        cout<<"id of this employee is "<<id<<endl;
        cout<<"This is employee number "<<count<<endl;
    }

    static void getcount()            //static function ka yah fayada h ki yah direct class se run ho jata h koi object ki jarurat nhi!!
    {
        //cout<<id;     throws an error!!
        cout<<"The value of count is"<<count<<endl;
    }
};

//default value of count static m 0 hoti h
int employee :: count=100;    // = 100 se mtlb count 100 se start hoga aur phr continue 101,102...!!


//14_oops_staticmembers::~14_oops_staticmembers()


int main(){
    employee rohan,adam, mahesh;
    //rohan.id = 1 //private h isliye error thorw krega
    rohan.setdata();
    rohan.getdata();
    employee:: getcount();       //static function ka yah fayada h ki yah direct class se run ho jata h koi object ki jarurat nhi!!
    adam.setdata();
    adam.getdata();
    employee:: getcount();     //koi object reference ki zarurat nhi direct run hojahegaa class se hi     
    mahesh.setdata();
    mahesh.getdata();
    employee:: getcount();
    
    return 0;
}