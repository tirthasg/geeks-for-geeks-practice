#include <iostream>
#include <utility>
using namespace std;

void PrintArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void ReverseSubArray(int arr[], int start, int end)
{
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void RotateArray(int arr[], int N, int d)
{
    // N = 6
    // d = -12

    d %= N;
    if (d == 0)
        return;
    
    if (d < 0)
        d += N;
    
    ReverseSubArray(arr, 0, N - 1);
    ReverseSubArray(arr, 0, d - 1);
    ReverseSubArray(arr, d, N - 1);
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int d;
    cin >> d;

    PrintArray(arr, N);

    RotateArray(arr, N, d);
    PrintArray(arr, N);

    delete [] arr;

    return 0;
}