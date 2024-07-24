#include<iostream>
using namespace std;

//function prototypes
//function name (argument); example..
int sum(int a,int b);
void intro(void);

int sum(int a,int b){
    /*a,b are formal parameter kyuki yah values le rhe h actual parameter se koi user se nhi*/
    int c = a+b;
    return c;
}

int main(){
    int n1,n2;
    cout<<endl;
    intro();
    cout<<endl;
    cout<<"Enter first number :"<<endl;
    cin>>n1;

    cout<<"Enter second number number :"<<endl;
    cin>>n2;
    
    //n1 and n2 are actual parameters isme values aarhe h through user!!
    cout<<"The sum of numbers is : "<<sum(n1,n2)<<endl;

    return 0;
}

void intro(){    //void mtlb function na koi value lega nahi koi value return krega, bs jo jese h kr dega!!
    cout<<"Hello everyone!!"<<endl;
}