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
    if (N == 0)
        return N;
        
    int j = 0;
    for (int i = 1; i < N; i++)
        if (arr[j] != arr[i]) {
            j++;
            arr[j] = arr[i];
        }

    return j + 1;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int size = RemoveDuplicates(arr, N);
    PrintArray(arr, size);

    delete [] arr;

    return 0;
}