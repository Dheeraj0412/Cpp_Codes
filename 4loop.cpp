#include<iostream>

using namespace std;

int main(){
    // for (int i = 1; i <=10; i++)    //for loop!!
    // {
    //     cout<<i<<endl;
    // }
    
    // int i=1;                       // while loop!!
    // while (i<=10)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    

    int i = 1;      //do while loop!!
    
    do             //agr condition false h phir bhi ek baar code ko chla degaa!! mtlb ek baar code chlake condition check krega!!
    {
        cout<<++i<<endl;
        i++;        
    } while (i<=10);


    return 0;
}

