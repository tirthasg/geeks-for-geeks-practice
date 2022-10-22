#include <iostream>
using namespace std;

bool IsSorted(int arr[], int N)
{
    for (int i = 0; i < N - 1; i++)
        if (arr[i] > arr[i + 1])
            return false;
    
    return true;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    bool result = IsSorted(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}