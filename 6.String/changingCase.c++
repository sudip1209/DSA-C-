#include <iostream>
#include<string>
using namespace std;

// if a letter is lower then convert to upper and upper to lower
int main()
{

    char c[]="wELCOME";
    int i;

    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]>=65 &&c[i]<=90)
            c[i]+=32;
        else if(c[i]>=97 &&c[i]<=122)
            c[i]-=32;

    }
    cout<<c<<endl;
    return 0;
}