#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector <int> v;
    v.push_back(10);

    cout<<v[0];

    v.push_back(121);

cout<<v.size();
    for ( int i=0; i<100;i++)
    {
        cout<<"The capacity is : "<<v.capacity()<<endl;
        cout<<"The size is : "<<v.size()<<endl;
        v.push_back(i+1);
        //cout<<v[i]<<endl;
    }
    // for ( int i=0; i<v.size();i++)
    // {
        
    // }
}