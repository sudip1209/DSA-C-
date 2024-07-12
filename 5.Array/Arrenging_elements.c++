// here we will arrange elements into two parts one side -ve and another +ve
#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};

void rearrange(struct Array *arr)
{
    int i=0;
    int j=arr->length-1;
    while(i<j)
    {
        while(arr->a[i]<0){i++;}
        while(arr->a[j]>=0){j--;}
        if(i<j)
        {
            swap(arr->a[i],arr->a[j]);
        }
    }

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
    struct Array arr={{1,-2,34,-44,54},10,5};
    rearrange(&arr);
    display(arr);

}
