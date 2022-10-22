#include <iostream>
#include <utility>
using namespace std;

void PrintArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void ReverseArray(int arr[], int N)
{
    int start = 0;
    int end = N - 1;
    while (start < end) {
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

    ReverseArray(arr, N);
    PrintArray(arr, N);

    return 0;
}