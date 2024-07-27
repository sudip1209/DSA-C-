#include <iostream>
#include<string>
using namespace std;

int main()
{

    char c[]="welcome";
    int k;
    char temp;
    for(k=0;c[k]!='\0';k++)
    {

    }
    int j=k-1;
    int i=0;
    while(i<j)
    {
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
        i++;
        j--;
    }

    cout<<c<<endl;

    return 0;
}