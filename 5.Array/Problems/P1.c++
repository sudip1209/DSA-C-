// find the missing no from an array 
// if array is sorted and array is first n numbers


#include <iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,5,6,7,8};

    int sum=0;

    int n=sizeof(a)/sizeof(int);
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];

    }

    n+=1;  //  to get sum of n number + the missing number

    int s= (n*(n+1))/2;
    cout<<s-sum<<endl;
}