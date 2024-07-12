#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};

int issorted(struct Array *arr)
{
    for(int i=0;i<arr->length-1;i++)
    {
        if(arr->a[i]>arr->a[i+1])
            return 0;
    }
    return 1;
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
    cout<<issorted(&arr)<<endl;
    display(arr);

}
