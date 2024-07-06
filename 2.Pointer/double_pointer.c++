#include<iostream>
using namespace std;
int sum(int *a,int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans+=a[i];
    }
    return ans;
}
int main()
{

int i=10;
int *p=&i;
int **pp=&p;

cout<<pp<<endl;
cout<<&p<<endl<<"\n";

cout<<p<<endl;
cout<<*pp<<endl;
cout<<&i<<endl<<"\n";

cout<<i<<endl;
cout<<*p<<endl;
cout<<**pp<<endl;
}