#include<iostream>
using namespace std;

int main(){  
    int a = 3;       
    int* b = &a;     //pointer                                    // & = address of operator
    cout<<"the address of a is :"<<b<<endl;             
    cout<<"the address of a is :"<<&a<<endl;
    cout<<"the value of 'a' stored in pointer 'b' :"<<*b<<endl<<endl;  // * = dereference of operator

    //pointer to pointer (to get address of pointer of 'b')
    int** c = &b;
    cout<<"the address of b is :"<<c<<endl;
    cout<<"the address of b is :"<<&b<<endl;
    cout<<"the value of 'b' is :"<<*c<<endl;
    cout<<"the value of 'a' stored in 'b' to 'c' :"<<**c<<endl;
    
    return 0;
}