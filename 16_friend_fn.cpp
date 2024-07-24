#include<iostream>
using namespace std;

class complex
{
private:
    int a,b;
public:

    void setdata(int v1,int v2)
    {
        a = v1;
        b = v2;
    }

    friend complex sum(complex z1,complex z2);  //declaration by class ki sum function kuch private data use kr krskta

    //it doesnt mean ki sum fn class ka part h bs using friend function class assuritiy dedeta h sum fn ko kuch pvt data use krne ko!! 

    void print()
    {
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sum(complex z1,complex z2)  
{
    complex  c3;
    c3.setdata((z1.a + z2.a), (z1.b + z2.b));
    return c3;
}


int main(){
    complex c1,c2,f;
    c1.setdata(1,4);
    c1.print();
    
    c2.setdata(5,6);
    c2.print();

    f = sum(c1,c2);
    f.print();
    
    return 0;
}


/*#properties of friend functions
1) not in a scope of class
2)since its not a scope of class , it cannot be called from the object of class, c1.sum() invalid throws an error
3) can be invoked or run without any object
4)usually contain object as argument
5) friend fn can be declared inside private or public section of class .mtlb koi farak nhi padhega
6) sum fn!! cannot accese the members directly by their names, to access any member need syntax object_name.member_name */