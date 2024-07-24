// find the missing no from an array 
// array is sorted 
// array starting index is not 0
// may have multiple missing elements
// not continuous missing no


#include <iostream>
using namespace std;

int main()
{
    int a[]={5,6,7,8,9,11,13};


    int n=sizeof(a)/sizeof(int);
    // cout<<n<<endl;

    for(int i=0;i<n;i++)
    {
        if(a[i]-i != a[0])
            cout<<a[i]-1<<endl;

    }

return 0;

 }