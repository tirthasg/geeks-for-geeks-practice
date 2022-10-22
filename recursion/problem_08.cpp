#include <iostream>
using namespace std;

void PrintArray(int arr[], int N)
{
    if (N == 0)
        return;
        
    cout << arr[0] << " ";
    PrintArray(arr + 1, N - 1);
}

int main()
{
    int arr[] = {3, 5, 1, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    PrintArray(arr, size);
    return 0;
}