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
    int i = -1;
    int j = 0;
    while (j < N) {
        if (arr[j] != 0) {
            i++;
            swap(arr[i], arr[j]);
        }
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

    PrintArray(arr, N);

    MoveZeros(arr, N);
    PrintArray(arr, N);

    delete [] arr;

    return 0;
}