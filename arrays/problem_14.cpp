#include <iostream>
#include <climits>
using namespace std;

int MaximumDifference(int arr[], int N)
{
    int *max_right = new int[N - 1];
    for (int j = N - 2; j >= 0; j--)
        if (j == N - 2)
            max_right[j] = arr[j + 1];
        else   
            max_right[j] = arr[j + 1] <= max_right[j + 1] ? max_right[j + 1] : arr[j + 1];

    int largest = INT_MIN;
    for (int i = 0; i < N - 1; i++)
        if (largest < max_right[i] - arr[i])
            largest = max_right[i] - arr[i];

    return largest;
}   

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = MaximumDifference(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}