#include<iostream>
using namespace std;


void swap(int a,int b){   //temp a  b          (dryrun)   //but this will not swap the numbers because actual parameters is copy banke,
    int temp = a;         // 4   4  5                     //swap fn m aarhe h jis se actual parameter pe koi farak nhi padhega
    a = b;                // 4   5  5
    b = temp;             // 4   5  4
}

//call by reference using pointer !!-- this will sure swap the numbers becoz pointer address value send krega function jis se actual ,
void swap_pointer(int* a,int* b){    //acutla parameter m value change ho jahegi, address ek hi hota h isliye!!
    int temp = *a;         
    *a = *b;                
    *b = temp;             
}

//call by reference using c++ reference variables!!
void swap_reference(int &a,int &b){       //ise huhe yah ki a and b point krege direct x and y ko!!  
    int temp = a;         
    a = b;                
    b = temp;             
}

// int & swap_returnvalue(int &a,int &b){      //value return!!  
//     int temp = a;         
//     a = b;                
//     b = temp;
//     return a;            
// }

int main(){
    int x = 2,y = 10;
    cout<<"the value of x is "<<x<<"\nthe value of y is :"<<y<<endl;

    //swap(x,y);  //yah bs value ko copy krke upr fn m bhej rha h jis se number swap nhi hoge for swap we will use 'pointer'.
    //swap_pointer(&x,&y);  //is se value swap ho jahegi kyuki yah address bhej rha h function m!!
    swap_reference(x,y);  //This will also swap the numbers
    // swap_returnvalue(x,y) = 450;  //changing number using return!!

    cout<<"After swapping\n";
    cout<<"the value of x is "<<x<<"\nthe value of y is :"<<y<<endl;
    

    return 0;
}