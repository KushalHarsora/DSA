/*
Vectors are also called as dynamic arrays. Which means that we can initialize the vectors without defining its size.

Vector1 Objectives:
1. Here we are going to use push_back() function to add elements to the end of vector.

Here we are going to create a empty vector and add to tail "1", "2", and "3".
So the Expected vector would be 1->2->3.
*/

#include "iostream"
#include "vector"

class Vector {

    // Initialized an Integer Vector
    private: std::vector<int>n;

    public: Vector(int arr[], int length) {
        for(int i = 0; i < length; i++) {
            n.push_back(arr[i]);
        }
        printVector();
    }

    public: void printVector() {
        for(int i = 0; i < n.size(); i++) {
            std::cout << "The Data in Array is: " << n[i] << std::endl;
        }
    }

};

int main() {
    int arr[] = {1, 2, 3};
    Vector obj = Vector(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}