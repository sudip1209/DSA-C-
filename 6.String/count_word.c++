#include <iostream>
#include<string>
using namespace std;

// if a letter is lower then convert to upper and upper to lower
int main()
{

    char c[]="welcome home sudip";
    int i;
    int word=1;

    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]==' ' && c[i -1]!=' ') //
            word++;
    }
    cout<<word<<endl;
    return 0;
}