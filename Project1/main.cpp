#include <iostream>
using namespace std;

int* bubble_sort(int size, int arr[]) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int copy = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = copy;
            }
        }
    }
    return arr;
}

// Function to print array. Array is called by reference
void print_array(int size, int arr[]) {
    for (int index = 0; index < size; index++)
        cout << arr[index] << " ";
    cout << endl;
}

int main() {
    cout << "What is the size of the Array?" << endl;
    int size;
    cin >> size;

    // Elements in Array
    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        cin >> arr[i];
    }

    int* ans = bubble_sort(size, arr);
    print_array(size, ans);

    return 0;
}
