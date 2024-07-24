#include<iostream>

using namespace std;

int main(){ 
    int a,b;
    cout<<"Enter your age \n";
    cin>>a;
    // if((a<18) && (a>0)){      //&& logical operator!!                               //if-else if else ladder
    //     cout<<"sorry, your are not eligible for driving license"<<endl;
    // }
    // else if (a==18){ 
    //     cout<<"congo, your are eligible for learning driving license"<<endl;
    // }
    // else if (a<=0){
    //     cout<<"you're not born yet"<<endl;
    // }
    // else if (a>18){
    //     cout<<"you already a driving license check it"<<endl;
    // }



switch (a)                      //switch case statement
{
case 18:
    cout<<"you are 18 now"<<endl;
    break;                                   /*agr break use nhi krte toh saare cases automatic print hojate break isliye use krte h taki vo case execute hoke function se exit hojahe code se nhi*/ 
                                            
case 11:
    cout<<"you are 11 now"<<endl;
    break;

case 20:
    cout<<"you are 20 now"<<endl;
    break;

default:
cout<<"sorry no special cases"<<endl;
main();
    break;
}

}