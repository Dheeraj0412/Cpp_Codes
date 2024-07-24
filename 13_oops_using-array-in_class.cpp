#include<iostream>
using namespace std;

class shop
{
private:
    int itemid[10];
    int itemprice[10];
    int count;

public:
    void initcout(void){
        count = 0;
    }
    void user_in(void);
    void display(void);
};

void shop:: user_in(void)
{
    cout<<"Enter id of your Item "<<count+1<<endl;
    cin>>itemid[count];
    cout<<"Enter price of your Item "<<endl;
    cin>>itemprice[count];
    count++;
}

void shop:: display(void)
{
    for (int i = 0; i < count; i++)
    {
        cout<<"The price of your item id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
    
}


int main(){
    shop kiraana;
    kiraana.initcout();

    int t;
    cout<<"Enter the Total number of Item you want to register :"<<endl;
    cin>>t;
    for (int i = 0; i <= t-1; i++)
    {
        kiraana.user_in();
    }
    kiraana.display();
    
    // kiraana.user_in();
    // kiraana.user_in();
    // kiraana.user_in();
    // kiraana.user_in();
    // kiraana.display();

    return 0;
}