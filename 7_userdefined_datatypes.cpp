#include<iostream>
using namespace std;

//user defined data type (struc) structure!!

// typedef struct students                              //typedef is used to change the name of user defined datatype!!    
// {
//     int id;
//     int marks;
//     int Class;
// }stud;                                             //shortcut you want type here!!


//user defined data type (union) !!
// typedef union money
// {
//     int rupee;                //in union datatype hum ek time pe ek value hi use kr skte h unki isme memory shared hoti h!!!
//     int dollar;
//     int pounds;
// }um;


int main(){
    int n;

    //enum datatype

    enum meal{Breakfast,lunch,snacks,dinner};    //using enum we can allocate integers value to given data as shown lunch,dinner etc!!
    
    meal m1 = lunch;            //as its a data type so we can extract its position value!!
    cout<<m1<<endl;

    cout<<Breakfast<<endl;
    cout<<dinner<<endl;
    cout<<lunch<<endl;
    cout<<snacks<<endl;


    //union datatype!!

    // um bank1;
    // bank1.rupee = 100;
    // bank1.dollar = 5;               //ek time pe ek value use krna h, agr do daldi toh jo last m use huhi vohi shared hojahegi sbko!!

    // cout<<"rupee in bank1 : "<<bank1.rupee<<endl;
    // cout<<"dollar in bank1 : "<<bank1.dollar<<endl;


    //struc data type

    // stud harry;
    // stud rohan;
    // harry.id = 1;
    // harry.marks = 400;
    // harry.Class= 9;

    // rohan.id = 2;
    // rohan.marks = 399;
    // rohan.Class = 10;
    
    
    // cout<<"Enter the id of student:"<<endl;
    // cin>>n;

    // // using if-else we will callout details of student!!

    // if (n == 1){
    //     cout<<"name of student harry"<<endl;
    //     cout<<"marks "<<harry.marks<<endl;
    //     cout<<"Class "<<harry.Class<<endl;
    // }
    // else if (n == 2){
    //     cout<<"name of studnet rohan"<<endl;
    //     cout<<"marks "<<rohan.marks<<endl;
    //     cout<<"class "<<rohan.Class<<endl;
    // }

    return 0;        //return 0 ka mtlb ki program pura ache se perform hochuka h ab 0 value dedo mtlb exit hojaho!!
}