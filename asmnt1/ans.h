#include <iostream>
using namespace std;

int main() {
    // Initialize an array of integers
    int arr[] = { 5, 3, 4, 6, 9 };
    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Bubble sort algorithm
    // Outer loop to iterate through all elements except the last one
    for (int i = 0; i < n - 1; i++) {
        // Inner loop to compare adjacent elements and swap if necessary
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                // Swap the current element with the next element
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
