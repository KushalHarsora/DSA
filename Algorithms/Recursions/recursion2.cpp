/*
Using Recursion we will implement merge sort. Its time complexity is O(nlogn).
In merge sort we will recursively divide the array in sub-arrays till we get single element into it.
Once we get to that state we will compare and sort elemets and finally merge them to get the original array.
Merge sort follows the divide and conquer approach to sort the array.

Recursion2 Objectives:
1. Implementation of Merge Sort using recursion.

Suppose we have array = [11, 2, 3, 1]
So first we divide by finding the mid of array => [11, 2], [3, 1] -> [11], [2], [3], [1]
Now we sort and merge the sub-arrays => [11], [2], [3], [1] -> [2, 11], [1, 3] -> [1, 2, 3, 11]
Thus finally we get the original array in sorted order.
*/

#include "iostream"

class MergeSort {

    public: MergeSort(int *arr, int start, int end) {
        if (start >= end) 
            return;
        
        int mid = (start + end) / 2;
        // For Left Half
        MergeSort(arr, start, mid);
        // For Right Half
        MergeSort(arr, mid + 1, end);

        // Merge the Array
        Merge(arr, start, end);
    }

    public: void Merge(int *arr, int start, int end) {
        int mid = (start + end) / 2;

        // We are subtracting from start as it will not always be zero and adding 1 to get upper bound
        int length1 = mid - start + 1;
        int length2 = end - mid;

        int *leftArray = new int[length1];
        int *rightArray = new int[length2];

        // Copy Data into array
        int mainArrayIndex = start;
        for(int i = 0; i < length1; i++) {
            leftArray[i] = arr[mainArrayIndex++];
        }

        for(int i = 0; i < length2; i++) {
            rightArray[i] = arr[mainArrayIndex++];
        }

        // Merge Two Arrays
        int index1 = 0;
        int index2 = 0;
        mainArrayIndex = start;
        while(index1 < length1 && index2 < length2) {
            if (leftArray[index1] > rightArray[index2])
                arr[mainArrayIndex++] = rightArray[index2++];
            else 
                arr[mainArrayIndex++] = leftArray[index1++];
        }

        // add remaining elements to array
        while (index1 < length1)
            arr[mainArrayIndex++] = leftArray[index1++];
        
        while (index2 < length2)
            arr[mainArrayIndex++] = rightArray[index2++];
    }

};

int main() {
    int array[] = {22, 4, 6, 21, 10, 1, 3};
    MergeSort obj(array, 0, sizeof(array) / sizeof(array[0]));
    std::cout << "The Sorted Array is -> [";
    for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "]" << std::endl;
    return 0;
}