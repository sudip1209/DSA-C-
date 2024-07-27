#include <iostream>
#include<string>
using namespace std;

// if a letter is lower then convert to upper and upper to lower
int main()
{

    char c[]="welcome ";
    int i;
    int word=1;
    bool valid;
    for(i=0;c[i]!='\0';i++)
    {
        if((c[i]>=65 && c[i]>=90) || (c[i]>=97 && c[i]>=122) || (c[i]>=48 && c[i]>=47) ) 
            valid=true;
        else 
            valid=false;
    }
    cout<<valid<<endl;  // 1 true // 0 false

    return 0;
}