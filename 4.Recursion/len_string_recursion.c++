#include<iostream>
using namespace std;

int len(char S[])
{
    if(S[0]=='\0')
    {
        return 0;
    }
    return 1+len(S+1);
    
}
int main()
{
    char a[]="abcd";
    int i=len(a);
    cout<<i<<endl;
}