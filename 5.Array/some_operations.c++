// GET
// SET
// MIN
// MIX
// SUM
// AVG
#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};


// Get_element function will give the element that is present at that insex
void Get_element(struct Array *arr,int index)
{
    if(index<0||index>arr->length)
    {
        return;
    }
    else
    {
        cout<<arr->a[index]<<endl;
    }
}

// set function will update the previous value with the give value at specific index
void set(struct Array *arr,int index,int value)
{
    if(index<0||index>arr->length)
    {
        return;
    }
    else
    {
       arr->a[index]=value;
    }
}

// min_max function will give the minimum and maximum value from an array

void min_max(struct Array *arr)
{
    int i;
    int min=arr->a[0];
    int max=arr->a[0];
    for(i=0;i<arr->length;i++)
    {
        if(arr->a[i]>max)
        {
            max=arr->a[i];
        }
        if(min>arr->a[i])
        {
            min=arr->a[i];
        }
    }
    cout<<"MIN : "<<min<<endl;
    cout<<"MAX : "<<max<<endl;

}

int Sum(struct Array *arr)
{
    int i;
    int sum=0;
    for(i=0;i<arr->length;i++)
    {
        sum+=arr->a[i];
    }
    return sum;
}

int Average(struct Array *arr)
{
    int i;
    int sum=0;
    for(i=0;i<arr->length;i++)
    {
        sum+=arr->a[i];
    }
    int average =sum/arr->length;

    return average;
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

    Get_element(&arr,3);
    set(&arr,3,55);
    display(arr);
    
    min_max(&arr);
    cout<<Average(&arr)<<endl;
    cout<<Sum(&arr)<<endl;
}
