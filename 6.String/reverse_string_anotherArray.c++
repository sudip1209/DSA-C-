#include <iostream>
#include<string>
using namespace std;

int main()
{

    char c[]="welcome";
    int i;
    for(i=0;c[i]!='\0';i++)
    {

    }
    i-=1;
    char temp[i];

    int j=0;
    while(i>=0)
    {
        temp[j]=c[i];
        i--;
        j++;
    }

    cout<<temp<<endl;

    return 0;
}