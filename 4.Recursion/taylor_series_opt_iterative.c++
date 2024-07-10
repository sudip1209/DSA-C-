#include<iostream>
using namespace std;

double e(int x,int n)
{
    static double s=1;
    for(;n>0;n--)
    {
    s=1+x*s/n;
    }

    return s;
}
int main()
{
    cout<<e(4,15)<<endl;
}