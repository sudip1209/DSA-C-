#include<iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};

void Delete(struct Array *arr,int index)
{
    if(index<0 || index >= arr->length)
    {
        return;
    }
    else
    {
        for(int i=index;i<arr->length-1;i++)
        {
            arr->a[index]=arr->a[index+1];
        }
        arr->length--;
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
    Delete(&arr,3);
    display(arr);
    
}
