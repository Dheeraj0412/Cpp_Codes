#include<iostream>
using namespace std;

int main(){
    int marks[5] = {60,70,80,99,45};        //we can also type just marks[], this is understood to c++!!
    
    marks[5] = 300;                       //different way to type array!!  

    cout<<marks[0]<<endl;                    //(0,1,2,3,4) are the position of int which are stored in array!!
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    
    marks[3] = 250;                       //values of array can be  changed!!
    
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;
   
    //printing values of array using for loop
    for (int i = 0; i <= 4; i++)
    {
        cout<<"the values of marks "<<i<<" is "<<marks[i]<<endl;
    }

    //printing values of array using while loop
    int i = 0;
    while (i<5)
    {
        cout<<"the values of marks using while loop "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    
    //Pointers and arrays

    int* p = marks;
    cout<<"value of marks[0] is "<<*p<<endl;
    cout<<"value of marks[1] is "<<*(p+1)<<endl;
    cout<<"value of marks[2] is "<<*(p+2)<<endl;
    cout<<"value of marks[3] is "<<*(p+3)<<endl;

    return 0;
}