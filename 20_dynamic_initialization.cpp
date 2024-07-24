#include<iostream>
using namespace std;

class bankdeposit
{
private:
    int principle;
    float interest;
    int years;
    float returnvalue;
public:
    bankdeposit(){}  //default constructor
    bankdeposit(int x,int y,int z); //z value as whole number like 4
    bankdeposit(int x,int y,float z); //z value as in decimal number like 0.04
    void print(void);

};

bankdeposit :: bankdeposit(int x,int y,int z)
{
    principle = x;
    years = y;
    interest = float(z)/100;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+interest);
    }
}

bankdeposit :: bankdeposit(int x,int y,float z)
{
    principle = x;
    years = y;
    interest = z;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+interest);
    }
}

void bankdeposit :: print(void)
{
    cout<<"The principle was "<<principle<<" And the return value of this principle after "<<years<<" years "<<" is "<<returnvalue<<endl;
}

int main(){
    int p,q,r;
    float R;
    bankdeposit bd1,bd2,bd3;

    cout<<"Enter the value of principle,years and interest(In whole number) :"<<endl; //R value as whole number like 4
    cin>>p>>q>>r;
    bd1 = bankdeposit(p,q,r);
    bd1.print();
    
    cout<<"Enter the value of principle,years and interest(In decimal) :"<<endl; //R value as in decimal number like 0.04
    cin>>p>>q>>R;
    bd2 = bankdeposit(p,q,R);
    bd2.print();
    return 0;
}