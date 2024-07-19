#include <iostream>
using namespace std;

struct Array{
    int a[20];
    int size;
    int length;
};

//union operation on sorted array 
void Union(struct Array *arr1, struct Array *arr2, struct Array *arr3)
{
    int i = 0, j = 0, k = 0;

    // Merge the two arrays into arr3
    while (i < arr1->length && j < arr2->length) {
        if (arr1->a[i] < arr2->a[j]) 
            arr3->a[k++] = arr1->a[i++];
        else if(arr1->a[i] > arr2->a[j])
            arr3->a[k++] = arr2->a[j++];
        else
        {
            arr3->a[k++] = arr1->a[i++];
            j++;
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

//union operation on UNsorted array

void RUnion(struct Array *arr1, struct Array *arr2, struct Array *arr3) {
    int k = 0;
    
    // Add all elements of arr1 to arr3
    for (int i = 0; i < arr1->length; i++) {
        arr3->a[k++] = arr1->a[i];
    }
    
    // Add elements of arr2 to arr3 if they are not already present
    for (int i = 0; i < arr2->length; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < arr1->length; j++) {
            if (arr2->a[i] == arr1->a[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            arr3->a[k++] = arr2->a[i];
        }
    }

    arr3->length = k;
    arr3->size = 20;
}
// intersection on sorted array 
void Intersection(struct Array *arr1, struct Array *arr2, struct Array *arr3)
{
    int i = 0, j = 0, k = 0;

    // Merge the two arrays into arr3
    while (i < arr1->length && j < arr2->length) {
        if (arr1->a[i] < arr2->a[j]) 
            i++;
        else if(arr1->a[i] > arr2->a[j])
            j++;
        else if(arr1->a[i] == arr2->a[j])
        {
            arr3->a[k++] = arr1->a[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 20;  // Assuming the size is sufficient
}

// intersection on UNsorted array 
void UIntersection(struct Array *arr1, struct Array *arr2, struct Array *arr3) {
    int k = 0;  // Initialize index for arr3

    // Find common elements and add to arr3
    for (int i = 0; i < arr1->length; i++) {
        for (int j = 0; j < arr2->length; j++) {
            if (arr1->a[i] == arr2->a[j]) {
                // Check if the element is already in arr3
                bool alreadyExists = false;
                for (int l = 0; l < k; l++) {
                    if (arr3->a[l] == arr1->a[i]) {
                        alreadyExists = true;
                        break;
                    }
                }
                // If the element is not already in arr3, add it
                if (!alreadyExists) {
                    arr3->a[k++] = arr1->a[i];
                }
                break;  // Exit the inner loop once a match is found
            }
        }
    }

    arr3->length = k;
    arr3->size = 20;
}


//Difference of two array 

void Difference(struct Array *arr1, struct Array *arr2, struct Array *arr3)
{
    int i = 0, j = 0, k = 0;

    // Merge the two arrays into arr3
    while (i < arr1->length && j < arr2->length) {
        if (arr1->a[i] < arr2->a[j]) 
            arr3->a[k++] = arr1->a[i++];      
        else if(arr1->a[i] > arr2->a[j])
            j++;
        else if(arr1->a[i] == arr2->a[j])
        {
            i++;
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 20;  // Assuming the size is sufficient
}


int main() {
    struct Array arr1 = {{1, 3, 5, 7, 9}, 20, 5};
    struct Array arr2 = {{2, 3, 6, 7, 10}, 20, 5};
    struct Array arr3;
    //Union(&arr1, &arr2, &arr3);
    // RUnion(&arr1, &arr2, &arr3);
    //UIntersection(&arr1, &arr2, &arr3);
    Difference(&arr1, &arr2, &arr3);
    for (int i = 0; i < arr3.length; i++) {
        cout << arr3.a[i] << " ";
    }

    return 0;
}
