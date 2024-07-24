// find the sum oa a pair in array
// array is not sorted 

// ? using hash table

#include <iostream>
using namespace std;

int main() {
    int a[] = { 2,3,4,5,6,7,8,9,10,1};
    int sum=12;
    int n = sizeof(a) / sizeof(a[0]);
    int high=20;
    int low=5;

    int *h=new int[high+1]();

    for (int i = 0; i <n; i++) {
            if(h[sum-a[i]] !=0)
            {
                cout<<a[i]<<" + "<<sum-a[i]<<" = " <<sum<<endl;
            }
            h[a[i]]++;
    }
    return 0;
}
