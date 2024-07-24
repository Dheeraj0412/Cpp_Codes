#include<iostream>
#include<string>
using namespace std;

//Nesting of a member functions!!
/*A member function can call another member function,
of the same class directly without using the dot operator*/

class binary
{
//private:     //default fn private hi hote h!! pvt likne ki jarurat nhi but for public its mandatory
    string b;
    void check_b(void);

public:
    void user_input(void);
    //void check_b(void);
    void swap(void);
    void display(void);

};


void binary :: user_input(void)
{
    cout<<"Enter a binary number :";
    cin>>b;
    check_b(); //nesting of member function.
}

void binary :: check_b(void)
{
    for (int i = 0; i < b.length(); i++)
    {
        if (b.at(i) != '0' && b.at(i) != '1')
        {
            cout<<"Not a Binary number."<<endl;
            exit(0);
        }   
    }     
}

void binary :: swap(void)
{
    for (int i = 0; i < b.length(); i++)
    {
        if (b.at(i) == '0')
        {
            b.at(i) = '1';
        }
        else
        {
            b.at(i) = '0';
        }  
    }   
}

void binary :: display(void)
{
    //cout<<"displaying your Binary number ";  
    for (int i = 0; i < b.length(); i++)
    {    
        cout<<b.at(i);
    } 
    cout<<endl;
}

int main(){
    binary num;
    num.user_input();
    //num.check_b();    //if m check_b function ko private krdu toh user use nhi kr pahega vo
    //direct execute hojahega class ke functions m hi!!
    cout<<"Displaying your Binary number before swap :\n";
    num.display();
    num.swap();
    cout<<"Displaying your Binary number after swap :\n";
    num.display();

    return 0;
}