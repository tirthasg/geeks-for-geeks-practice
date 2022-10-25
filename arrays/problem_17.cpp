#include <iostream>
using namespace std;

void PrintArray(int arr[], int N)
{
    if (N == 0) {
        cout << "Array is empty" << endl;
        return;
    }
    
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int Insert(int arr[], int size, int capacity, int value)
{
    if (size == capacity) {
        cout << "Array is full" << endl;
        return size;
    }
        
    arr[size] = value;

    return size + 1;
}

int Delete(int arr[], int size, int capacity)
{
    if (size == 0) {
        cout << "Array is empty" << endl;
        return size;
    }
    
    return size - 1;
}

int main() {
    int capacity;
    cin >> capacity;

    int *arr = new int[capacity];

    int t;
    cin >> t;

    int size = 0;
    while (t != 0) {
        int value;
        cin >> value;

        size = Insert(arr, size, capacity, value);
        PrintArray(arr, size);

        t--;
    }

    cin >> t;
    while (t != 0) {
        size = Delete(arr, size, capacity);
        PrintArray(arr, size);

        t--;
    }

    return 0;
}