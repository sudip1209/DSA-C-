#include<iostream>
using namespace std;

int index(int a[],int size,int key)
{
    if(size==0)
    {
        return -1;
    }
    int ans=index(a+1,size-1,key);
    if(ans==-1)
    {
        if (a[0]==key)
            return 0;
        else
            return -1;
    }
    return ans+1;
}
int main()
{
    int a[5]={5,5,6,5,6};
    cout<<index(a,5,5)<<endl;
    cout<<index(a,5,6)<<endl;
    cout<<index(a,5,10)<<endl;
}