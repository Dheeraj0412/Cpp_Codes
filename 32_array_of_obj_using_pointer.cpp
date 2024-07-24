#include<iostream>
using namespace std;

class shop
{
    int id;
    int price;
    public:
        int setdata(int a,int b){
            id=a;
            price=b;
        }

        void print(){
            cout<<"id of this item is :"<<id<<endl;
            cout<<"price of this item is :"<<price<<endl;
        }
};

int main(){
    int size = 2;
    int p,q,i;
    shop *ptr = new shop[size]; //loop m pointer last obj pe chlajahega toh jb print krege toh garabage value ahegi!!
    
    shop *ptrtemp = ptr; //isliye yah use kr rhe h jise pointer first pe hi ho aur use ptrtemp se assign krdiya!!

    for (i = 0; i < size; i++)
    {
        cout<<"Enter the id of item no "<<i+1<<endl;
        cin>>p;
        cout<<"Enter the price of item no "<<i+1<<endl;
        cin>>q;
        ptr->setdata(p,q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number :"<<i+1<<endl;
        ptrtemp->print();
        ptrtemp++;
    }
    
    
    return 0;
}