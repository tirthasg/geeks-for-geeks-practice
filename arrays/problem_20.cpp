#include <iostream>
using namespace std;

void PrintArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int RemoveDuplicates(int arr[], int N)
{
    if (N == 0 || N == 1)
        return N;

    int size = RemoveDuplicates(arr + 1, N - 1);

    if (arr[0] != arr[1])
        return size + 1;

    for (int i = 1; i <= size; i++)
        arr[i - 1] = arr[i];
    
    return size;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int size = RemoveDuplicates(arr, N);
    cout << size << endl;
    PrintArray(arr, size);

    delete [] arr;

    return 0;
}