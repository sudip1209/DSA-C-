// find the duplicate in  an array and count the duplicate
// array is sorted 

// ? using hash table

#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 6, 6, 6, 11, 11, 13, 20,3};
    int n = sizeof(a) / sizeof(a[0]);
    int high=a[n];
    int low=a[0];

    int *h=new int[high+1]();

    for (int i = 0; i <n; i++) {
        if(a[i]==a[i+1])
        {
            h[a[i]]++;
        }
    }
    for (int i = low; i <=high; i++) {
        if(h[i]!=0)
        {
           cout<<i<<" appears "<<h[i]+1<<"times"<<endl;
        }
    }

    return 0;
}
