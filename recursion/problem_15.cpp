#include <iostream>
#include <utility>
using namespace std;

void PrintArray(int arr[], int N)
{
    if (N == 0) {
        cout << "Array is empty" << endl;
        return;
    }

    cout << "Elements of array: ";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void ReverseArray(int arr[], int start, int end)
{
    if (start >= end)
        return;
    
    swap(arr[start], arr[end]);
    ReverseArray(arr, start + 1, end - 1);
}

int main()
{
    int arr[] = {3, 5, 1, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    PrintArray(arr, size);
    ReverseArray(arr, 0, size - 1);
    PrintArray(arr, size);

    return 0;
}