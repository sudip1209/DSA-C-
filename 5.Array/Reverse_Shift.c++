    // left_shift(&arr);
    // right_shift(&arr);
    // left_rotate(&arr);
    // right_rotate(&arr);

#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    cout<<"The elements are: "<<endl;
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.a[i]<<endl;
    }

}

// reversing the array 
// USING A TERMPORARY ARRAY

void reverse(struct Array *arr)
{
    int i,j;
    int b[arr->length];
    for(i=arr->length-1,j=0;i>=0;i--,j++)
    {
        b[j]=arr->a[i];
    }
    for(i=0;i<arr->length;i++)
    {
        arr->a[i]=b[i];
    }
}


// reversing the array 
// WITHOUT USING A TERMPORARY ARRAY

void rreverse(struct Array *arr)
{
    int i,j,temp;
    int b[arr->length];
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        temp=arr->a[i];
        arr->a[i]=arr->a[j];
        arr->a[j]=temp;
            // swap(arr->a[i],arr->a[j]);
    }
}


//left shift

void left_shift(struct Array *arr)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        arr->a[i]=arr->a[i+1];
    }
}


//Right shift

void right_shift(struct Array *arr)
{
    int i;
    for(i=arr->length;i>=0;i--)
    {
        arr->a[i]=arr->a[i-1];
    }
}

//left Rotate
void left_rotate(struct Array *arr)
{
    int i;
    int temp;
    temp=arr->a[0];
    for(i=0;i<arr->length;i++)
    {
        arr->a[i]=arr->a[i+1];
    }
    arr->a[arr->length-1]=temp;
}


//Right Rotate
void right_rotate(struct Array *arr)
{
    int i;
    int temp;
    temp=arr->a[arr->length-1];
    for(i=arr->length-1;i>=0;i--)
    {
        arr->a[i]=arr->a[i-1];
    }
    arr->a[0]=temp;
}

int main()
{
    struct Array arr={{1,2,3,4,5},10,5};
    display(arr);
    left_shift(&arr);
    right_shift(&arr);
    left_rotate(&arr);
    right_rotate(&arr);
    display(arr);
}
