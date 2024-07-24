// find the missing no from an array 
// array is sorted 
// array starting index is not 0
// may have multiple missing elements
// may have more than one  continuous missing no


#include <iostream>
using namespace std;

int main()
{
    int a[] = {5, 6, 11, 13,20};

    int n = sizeof(a) / sizeof(int);

    int low = a[0];
    int diff = low - 0;

    for (int i = 0; i < n; i++)
    {
        while (a[i] - i != diff)
        {
            cout << (i + diff) << endl;
            diff++;
        }
    }

    return 0;
}
