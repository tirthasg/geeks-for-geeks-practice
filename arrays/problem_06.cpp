#include <iostream>
using namespace std;

void PrintArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int DeleteDuplicates(int arr[], int N)
{
    if (N == 0)
        return N;
    
    int i = 0;
    int j = 1;
    while (j < N) {
        while (j < N && arr[i] == arr[j])
            j++;
        
        if (j == N)
            break;

        i++;
        arr[i] = arr[j];
    }

    return i + 1;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int size = DeleteDuplicates(arr, N);
    PrintArray(arr, size);

    delete [] arr;

    return 0;
}