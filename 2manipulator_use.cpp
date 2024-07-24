#include<iostream>
#include<iomanip> //header used to import fns of manipulator like setw

using namespace std;

int main(){
    int a = 1,b = 11,c = 111,d = 1111;
    cout<<"value of a without setw: "<<a<<endl;
    cout<<"value of b without setw: "<<b<<endl;
    cout<<"value of c without setw: "<<c<<endl;
    cout<<"value of d without setw: "<<d<<endl;

    cout<<"value of a  setw: "<<setw(4)<<a<<endl;
    cout<<"value of b  setw: "<<setw(4)<<b<<endl;
    cout<<"value of c  setw: "<<setw(4)<<c<<endl;
    cout<<"value of d  setw: "<<setw(4)<<d<<endl;
    
    
    return 0;

}