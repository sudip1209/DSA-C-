#include<iostream>
using namespace std;
int main()
{
    int *p=new int;
    *p=10;
    cout<<*p<<endl;
    char *pc = new char[5];  // Allocate enough memory to hold "abcd" and the null terminator
    strcpy(pc, "abcd");      // Copy the string into the allocated memory
    cout << pc << endl;      // Print the string
    delete[] pc;             // Don't forget to free the allocated memory
    delete p;

    int *pa=new int[50];
    pa[0]=10;
    cout<<pa[0]<<endl;

    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int *pa1=new int[n];
    cout<<"Enter the element "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>pa1[i];
    } 
}