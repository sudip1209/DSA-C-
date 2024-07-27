#include <iostream>
#include<string>
using namespace std;

// if a letter is lower then convert to upper and upper to lower
int main()
{

    char c[]="welcome";
    int i;
    int vowel=0;
    int consonant=0;

    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]=='A' || c[i]=='a' || c[i]=='E' || c[i]=='e'|| c[i]=='I' || c[i]=='i' || c[i]=='O' || c[i]=='o' || c[i]=='U' || c[i]=='u' )
            vowel++;

        else if((c[i]>=97 &&c[i]<=122) || (c[i]>=65 &&c[i]<=90))
            consonant++;
    }
    cout<<vowel<<endl;
    cout<<consonant<<endl;
    return 0;
}