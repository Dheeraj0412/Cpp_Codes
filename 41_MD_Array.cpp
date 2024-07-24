//multidimensional Arrays [2d ARRAYS]

#include<iostream>
using namespace std;

int setmatrix(int a,int b)
{
    int arr[a][b];q
    cout<<"Enter your matrix eg [1 2]:"<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin>>arr[i][j];
            
        } 
    } 

    cout<<"Displaying your Matrix"<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<arr[i][j]<<",";
        } 
        cout<<endl;
    }

    int c;
    cout<<"search number: "<<endl;\
    cin>>c;
    bool flag = false;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] == c)
            {
                cout<<"element is found"<<endl;
                cout<<"Its position is: "<<i<<","<<j<<endl;;
                flag = true;
            }  
        }  
    }
    if (!flag)
    {
        cout<<"Element not found."<<endl;
    }
    
    
}

int main(){
    int a,b;
    cout<<"Enter No. of rows you want to enter"<<endl;
    cin>>a;
    cout<<"Enter No. of columns you want to enter"<<endl;
    cin>>b;
    setmatrix(a,b);

    return 0;
}