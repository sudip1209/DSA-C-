#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};

int LinearSearch(struct Array *arr,int key)
{
    int i;
    for(int i=0;i<arr->length;i++)
    {
        if(arr->a[i]==key)
        {
            return i;
        }
    }

    return -1;

}
void display(struct Array arr)
{
    int i;
    cout<<"The elements are: "<<endl;
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.a[i]<<endl;
    }

}


int main()
{
    struct Array arr={{1,2,3,4,5},10,5};

    int result=LinearSearch(&arr,3);
    if(result==-1)
    {
    cout<<"Element not found "<<endl;
    }
    else
    {cout<<"Element found at index "<<result<<endl;

    }
    
    display(arr);
    
}
