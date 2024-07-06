#include<iostream>
using namespace std;
int main()
{
    int i=65;
    char c=i;

    int *p=&i;
    char *pc=(char *)p;
    cout<<c<<endl<<"\n";
    cout<<p<<endl<<"\n";
    cout<<pc<<endl<<"\n";
    cout<<*p<<endl<<"\n";
    cout<<*pc<<endl<<"\n";
    return 0;
}