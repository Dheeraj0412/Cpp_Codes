// Destructors are usually used to deallocate memory and do other cleanup for a class object and its class members when the object is destroyed. A destructor is called for a class object when that object passes out of scope or is explicitly deleted.

#include<iostream>
using namespace std;
int c;
 
class num
{
    public:
        num(){
            c++;
            cout<<"This is the Time when constructor is called for object number "<<c<<endl;
        }

        ~num(){       //destructor!!
            cout<<"This is the Time when destructor is called for object number "<<c<<endl;
            c--;
        }
};

int main(){
    cout<<"we are inside the main function"<<endl;
    cout<<"creating object n1 "<<endl;
    num n1;{
        cout<<"entering the block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to the main function"<<endl;
    
    return 0;
}