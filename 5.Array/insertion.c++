#include<iostream>
using namespace std;

struct Array{
    int *a;
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    cout<<"The elements are: ";
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.a[i]<<endl;
    }

}



int main()
{
    struct Array arr;
    int n;

    cout<<"Enter size of array "<<endl;

    cin>>arr.size;
    arr.a=new int [arr.size];
    arr.length=0;
    cout<<"Enter the length of element : "<<endl;
    cin>>n;

    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr.a[i];
    }
    arr.size=n;
    display(arr);
    return 0;
}