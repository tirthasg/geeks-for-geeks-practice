#include <iostream>
using namespace std;

int TrapWater(int arr[], int N)
{
    int i = 0;
    while (i < N) {
        if (arr[i] == 0)
            break;
        i++;
    }

    if (i == N || i == 0 || i == N - 1)
        return 0;

    int lower = arr[i - 1];
    int total = 0;
    while (i < N && arr[i] < lower) {
        total += arr[i];
        i++;
    }

    if (i == N || i == N - 1)
        if (lower <= arr[i - 1])
            return total + lower;

    return total;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = TrapWater(arr, N);
    cout << result << endl;

    delete [] arr;
    
    return 0;
}