#include<iostream>
using namespace std;                                                

//Recursion is the technique of making a function call itself
//example of recursion we will see using finding a factorial of a number!!

int fac(int n){
    if(n<=1){
        return 1;
    }
    return n*fac(n - 1);    //yah se fn phir se recall horha h !!
}


int main(){
    int a;
    cout<<"Enter the number : "<<endl;
    cin>>a;
    cout<<"The factorial of given number is : "<<fac(a)<<endl;

    return 0;
}