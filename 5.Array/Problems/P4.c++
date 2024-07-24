// find the missing no from an array 
// array is sorted 
// array starting index is not 0
// may have multiple missing elements
// may have more than one  continuous missing no


// ? using hashing 


#include <iostream>
#include <ctime>
using namespace std;

int main()
{std::clock_t start = std::clock();
    int a[] = {5, 6, 11, 13,20};

    int n = sizeof(a) / sizeof(int);
    int high = 21;
    int low= 3;
    // Correct way to declare and initialize array h
    int* h = new int[high+1]();



    for (int i = 0; i < n; i++)
    {
        h[a[i]]++;
    }
    cout<<"hash"<<endl;


    for (int i = low; i <= high; i++)
    {
        if(h[i]==0)
            cout<<i<<endl;
    }


 
    clock_t end = clock();
    double elapsed_secs = double(end - start) / CLOCKS_PER_SEC;
    cout << "Time taken: " << elapsed_secs << " seconds" << endl;
    return 0;
}
