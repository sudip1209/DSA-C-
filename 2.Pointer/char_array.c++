#include<iostream>
using namespace std;
int main()
{
char st[]="abc";
char *p=&st[0];
cout<<*p<<endl;
cout<<st<<endl;
cout<<&st<<endl;
cout<<st[0]<<endl;
}