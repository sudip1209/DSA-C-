#include<iostream>
using namespace std;

int index(int a[], int size, int key)
{
    // Base case: if size is zero, key is not in the array
    if (size == 0)
    {
        return -1;
    }
    
    // If the first element is the key, return 0
    if (a[0] == key)
    {
        return 0;
    }

    // Recursive case: look in the rest of the array
    int ans = index(a + 1, size - 1, key);
    
    // If the key was not found in the rest of the array
    if (ans == -1)
    {
        return -1;
    }

    // Otherwise, return the index plus 1
    return ans + 1;
}

int main()
{
    int a[5]={1,2,3,4,5};
    cout<<index(a,5,5)<<endl;
    return 0;
}