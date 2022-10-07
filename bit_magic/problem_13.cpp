#include <iostream>
using namespace std;

int MissingNumber(int arr[], int N)
{
    int result = 0;
    for (int i = 1; i <= N + 1; i++)
        result ^= i;

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

    int result = MissingNumber(arr, N);
    cout << result << endl;

    return 0;
}