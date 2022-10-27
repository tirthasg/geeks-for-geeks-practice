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
    int j = 0;
    for (int i = 0; i < N; i++)
        if (arr[i]) {
            swap(arr[j], arr[i]);
            j++;
        }
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    MoveZeros(arr, N);
    PrintArray(arr, N);

    delete [] arr;

    return 0;
}