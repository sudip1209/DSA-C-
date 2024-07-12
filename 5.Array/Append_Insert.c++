#include<iostream>
using namespace std;

struct Array{
    int a[20];
    int size;
    int length;
};
void append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
    {
        arr->a[arr->length++]=x;
    }
}

void insert(struct Array *arr,int index,int x)
{
    int i;
    if(index<0 || index>arr->length)
    {
        cout<<"Index out of bound";
        return;
    }
    else{
        for(i=arr->length;i>index;i--)
        {
            arr->a[i]=arr->a[i-1];
        }
        arr->a[index]=x;
       arr->length++;
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
    struct Array arr={{1,2,3,4,5},10,5};

    // cout<<"Enter size of array "<<endl;

    // cin>>arr.size;
    // arr.a=new int [arr.size];
    // arr.length=0;
    // cout<<"Enter the length of element : "<<endl;
    // cin>>n;

    // cout<<"Enter the elements :"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr.a[i];
    // }
    // arr.size=n;
    cout<<"Initial array"<<endl;
    display(arr);
    append(&arr,111);
    cout<<"Append array"<<endl;
    display(arr);
    insert(&arr,3,99);
    cout<<"Insertion array"<<endl;
    display(arr);
    return 0;
}