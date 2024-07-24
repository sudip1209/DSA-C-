// find the duplicate in  an array and count the duplicate
// array is not sorted 

// ? using hash table

#include <iostream>
using namespace std;

int main() {
    int a[] = { 6, 6, 6, 11,6,5,5, 11, 13, 20};
    int n = sizeof(a) / sizeof(a[0]);
    int high=20;
    int low=5;

    int *h=new int[high+1]();

    for (int i = 0; i <n; i++) {
            h[a[i]]++;
    }
    for (int i = low; i <high; i++) {
        if(h[i]>1)
        {
           cout<<i<<" appears "<<h[i]<<" times"<<endl;
        }
    }

    return 0;
}
