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

int Insert(int arr[], int size, int capacity, int index, int value)
{
    if (size == capacity) {
        cout << "Array is full" << endl;
        return size;
    }

    if (index > size || index < 0) {
        cout << "Index out of bound" << endl;
        return size;
    }

    if (index == size) {
        arr[index] = value;
        return size + 1;
    }

    for (int i = size - 1; i >= index; i--)
        arr[i + 1] = arr[i];
    
    arr[index] = value;

    return size + 1;
}

int Delete(int arr[], int size, int capacity, int index)
{
    if (size == 0) {
        cout << "Array is empty" << endl;
        return size;
    }

    if (index >= size || index < 0) {
        cout << "Index out of bound" << endl;
        return size;
    }

    for (int i = index; i < size - 1; i++)
        arr[i] = arr[i + 1];
    
    return size - 1;
}

int main()
{
    int capacity;
    cin >> capacity;

    int *arr = new int[capacity];

    int t;
    cin >> t;

    int size = 0;
    while (t != 0) {
        int index, value;
        cin >> index >> value;

        size = Insert(arr, size, capacity, index, value);
        PrintArray(arr, size);

        t--;
    }

    cin >> t;
    while (t != 0) {
        int index;
        cin >> index;

        size = Delete(arr, size, capacity, index);
        PrintArray(arr, size);

        t--;
    }

    return 0;
}