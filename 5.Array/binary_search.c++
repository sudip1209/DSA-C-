#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};
// iterative Binary search 


int BinrySearch(struct Array *arr,int low,int high,int key)
{
    while(low<high)
    {
        int mid=(low+high)/2;
        if(arr->a[mid]==key)
        {
            return mid;
        }
        else if(arr->a[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

// Recursive Binary search 
int RBinrySearch(struct Array *arr,int low,int high,int key)
{
    int mid=(low+high)/2;
    if(low<=high)
    {
        if(arr->a[mid]==key)
        {
            return mid;
        }
        else if(arr->a[mid]<key)
        {
            return RBinrySearch(arr,mid+1,high,key);
        }
        else{
            return RBinrySearch(arr,low,mid-1,key);
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

    int result=BinrySearch(&arr,0,5,3);
    if(result==-1)
    {
    cout<<"Element not found "<<endl;
    }
    else
    {cout<<"Element found at index "<<result<<endl;

    }
    
    display(arr);
    
}
