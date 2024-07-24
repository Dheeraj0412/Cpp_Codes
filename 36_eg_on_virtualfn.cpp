#include<iostream>
#include<cstring>
using namespace std;

class site
{
    protected:
        string title;
        float rating;
    public:
        site(string t,float r){
            title = t;
            rating = r;
        }
        virtual void display(){}

        //virtual void display()=0;  /*do nothing function or pure virtual function, ise hoga yah ki derived class m display function define krna hi padhega agr nhi kiya toh error throw hoga!!*/

        //An abstract class is a class that is designed to be specifically used as a base class. An abstract class contains at least one pure virtual function. this is used to derived more class from base class!!
        
};

class s_video : public site
{
    protected:
        float vid_l;
    public:
        s_video(string t,float r,float l) : site(t,r)
        {
            vid_l = l;
        }

        void display()
        {
            cout<<"video title :"<<title<<endl;
            cout<<"video Rating :"<<rating<<endl;
            cout<<"video length :"<<vid_l<<"hours"<<endl;
        }
};

class s_text : public site
{
    protected:
        int words;
    public:
        s_text(string t,float r,int w) : site(t,r)
        {
            words = w;
        }

        void display()     
        {
            cout<<"text title :"<<title<<endl;
            cout<<"text Rating :"<<rating<<endl;
            cout<<"text words :"<<words<<endl;
        }
};

int main(){
    string title;
    float vid_l,rating;
    int words;
    
    //for video
    title = "habits video";
    vid_l = 3.5;
    rating = 4.6;
    s_video v(title,rating,vid_l);

    //for text
    title = "habits text";
    vid_l = 2.5;
    rating = 4.6;
    words = 3500;
    s_text t(title,rating,words);

    site *ptr[2];
    ptr[0] = &v;
    ptr[1] = &t;

    //agr dono derived class m se display fn ek m nhi huha toh virtual function run ho jahega!!!
    ptr[0]->display();
    ptr[1]->display();

    return 0;
}

//rules for virtual functions
/*-they cannot be static
-virtual fn can be friend of another class
- a virtual fn in base class may not be used
-if a virtual fn is defined in a bse class, there is no necessity of redfining it in derived class*/