#include <iostream>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;
};

void merge(struct Array *arr1, struct Array *arr2, struct Array *arr3)
{
    int i = 0, j = 0, k = 0;

    // Merge the two arrays into arr3
    while (i < arr1->length && j < arr2->length) {
        if (arr1->a[i] < arr2->a[j]) {
            arr3->a[k++] = arr1->a[i++];
        } else {
            arr3->a[k++] = arr2->a[j++];
        }
    }

    // Copy remaining elements from arr1, if any
    for(;i<arr1->length;i++)
    {
        arr3->a[k++]=arr1->a[i];
    }

    // Copy remaining elements from arr2, if any
    for(;j<arr2->length;j++)
    {
        arr3->a[k++]=arr2->a[j];
    }


    arr3->length = k;
    arr3->size = 20;  // Assuming the size is sufficient
}

int main() {
    struct Array arr1 = {{1, 3, 5, 7, 9}, 20, 5};
    struct Array arr2 = {{2, 4, 6, 8, 10}, 20, 5};
    struct Array arr3;

    merge(&arr1, &arr2, &arr3);

    for (int i = 0; i < arr3.length; i++) { 
        cout << arr3.a[i] << " ";
    }

    return 0;
}
