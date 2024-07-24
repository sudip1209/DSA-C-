// find the duplicate in  an array and count the duplicate
// array is sorted 

#include <iostream>
using namespace std;

int main() {
    int a[] = {5, 6, 6, 6, 11, 11, 13, 20};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            int count = 1; // Start count at 1 since we have at least one duplicate 
            int j = i + 1;
            while (j < n && a[j] == a[i]) {
                count++;
                j++;
            }
            cout << a[i] << " is appearing " << count << " times" << endl;
            i = j - 1; // Move i to the last occurrence of the current duplicate
        }
    }

    return 0;
}
