#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" "; //can also be use to access element
    } 
}

int main(){
    vector<int> vec1; //zero length integer vector.
    int size;
    int element;
    cout<<"Enter The size of your vector :"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element no "<<i+1<<endl;
        cin>>element;
        vec1.push_back(element);
    }

    //vec1.pop_back(); //end wala element bhr nikl jahega vector se
    cout<<"Before insertion"<<endl;
    display(vec1);
    cout<<endl;

    vector<int> :: iterator iter = vec1.begin(); //iterator 'iter' starting of vector pe point hogya!

    //vec1.insert(iter1, 256); //first element pe baad insertion ke liye iter+1 krdo.

    //inserted element ki copy ke liye!!
    vec1.insert(iter+1,4, 256); //4 copy insert hojahegi 256 ki vector m

    cout<<"After insertion"<<endl;
    display(vec1);
    
    return 0;
}

/*vector<int> vec(4, 10); 4-element vector of    10s  
output-> 10 10 10 10
cout<<vec.size(); output-> 4 */