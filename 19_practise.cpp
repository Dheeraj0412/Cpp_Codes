//program to find Distance b/w two points

#include<iostream>
#include<cmath> //to import all math function

using namespace std;

class point
{
    int a,b;
    double e;
public:
    
    point(int x,int y){
        a = x;
        b = y;
    }                                           //constructor overloading with different parameter!!

    point(point z1,point z2){
        double c,d;
        c = pow(z2.a - z1.a, 2);
        d = pow(z2.b - z1.b, 2);
        e = sqrt(c+d);
    }

    point(int x){
        a = x;
        b = 0;
    }

    void d_print()
    {
        cout<<"The Distance b/w two pts is :"<<e<<endl;
    }

    void print(){

        cout<<"The coordinatesa are ("<<a<<","<<b<<")"<<endl;
    }

};

int main(){
    // double q,w,e,f;
    // cout<<"Enter the coordinate x of point_1 :"<<endl;
    // cin>>q;
    // cout<<"Enter the coordinate y of point_1 :"<<endl;
    // cin>>w;
    // cout<<"Enter the coordinate x of point_2 :"<<endl;
    // cin>>e;
    // cout<<"Enter the coordinate y of point_2 :"<<endl;
    // cin>>f;

    point a(0,1);
    point b(0,6);
    point r(a,b);
    a.print();
    b.print();
    r.d_print();

    point v(20);
    v.print();

    return 0;
}