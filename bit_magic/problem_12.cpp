#include <iostream>
using namespace std;

int FindOddAppearing(int arr[], int N)
{
    int result = 0;
    for (int i = 0; i < N; i++)
        result ^= arr[i];

    return result;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = FindOddAppearing(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}