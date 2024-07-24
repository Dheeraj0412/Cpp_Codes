#include<iostream>
#include<fstream>
#include<cstring>

/*
The useful classess for working with files in c++,
- fstreambase
- ifstream ->derived from fstreambase.
- ofstream ->derived from fstreambase.
*/

//In order to work with files, we have to open it and primarily there are 2 ways to open a file:

// - using a constructor
// - using the member function open() in the class

using namespace std;

int main(){

    string t = "writing sample from program!!";
    string e = "writing sample using open()";
    string r;
    // opening file using construtor and writing in it.

    // ofstream out("37_sample_write.txt"); //write operation.
    // out<<t;

    // opening file using open() and writing in it.same goes with reading a file!
    
    ofstream out; //ofstream class ka ek 'out' object
    out.open("37_sample_write.txt");
    out<<e;
    out.close();

    

    //out.close(); //with this file get close no more we can write in it!!

    // opening file using construtor and reading from it.

    // ifstream in("37_sample_read.txt"); //read operation.
    //in>>r; //space pe baad yah nhi padhta!! isliye
    // getline(in, r); //use getline() function to read whole line.
    // cout<<r;

    

    
    return 0;
}