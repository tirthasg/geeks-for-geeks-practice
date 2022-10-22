#include <iostream>
#include <utility>
using namespace std;

void PrintArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void MoveZeros(int arr[], int N)
{
    int start = 0;
    int end = N - 1;
    while (start < end) {
        while (start < end && arr[start] != 0)
            start++;
        
        while (start < end && arr[end] == 0)
            end--;
        
        if (start > end)
            break;
        
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    PrintArray(arr, N);

    MoveZeros(arr, N);
    PrintArray(arr, N);

    delete [] arr;

    return 0;
}