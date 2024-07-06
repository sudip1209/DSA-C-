#include<iostream>
#include<vector>
using namespace std;

int index(int a[],int size,int key)
{
    vector<int> v;
    if(size==0)
    {
        return 0;
    }
    int ans=index(a+1,size-1,key);
    if(ans==-1)
    {
        if (a[0]==key)
            v.push_back(0);
            return v.size();
        else
            return 0;
    }
    v.push_back(ans);
    return v.size();
}
int main()
{
    int a[5]={5,5,6,5,6};
    cout<<index(a,5,5)<<endl;
    cout<<index(a,5,6)<<endl;
    cout<<index(a,5,10)<<endl;
}