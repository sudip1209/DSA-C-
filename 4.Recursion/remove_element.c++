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

void removeX(char S[])
{
    if(S[0] == '\0')
    {
        return;
    }
    if(S[0] != 'x')
    {
        removeX(S + 1);
        
    }
    else
    {
        int i = 0;
        while(S[i] != '\0')
        {
            S[i] = S[i + 1];
            i++;
        }
        removeX(S);
    }
}

int main()
{
    char a[]="axbxcxd";
    cout<<a<<endl;
    cout<<len(a)<<endl;
    removeX(a);
    cout<<a<<endl;
    cout<<len(a)<<endl;
}