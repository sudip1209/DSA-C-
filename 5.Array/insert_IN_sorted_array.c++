#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};

void insert(struct Array * arr,int value)
{
    int i=arr->length-1;
    if(arr->length==arr->size)
        return;
    while(i>=0 && arr->a[i]>value)
    {
        arr->a[i+1]=arr->a[i];
        i--;
    }
    arr->a[i+1]=value;
    arr->length++;

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
    struct Array arr={{1,2,34,44,54},10,5};
    insert(&arr,39);
    display(arr);

}
