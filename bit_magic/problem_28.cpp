#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int MaximumOrValue(int arr[], int N)
{
    int result = INT_MIN;
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            result = max(result, arr[i] | arr[j]);
    
    return result;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = MaximumOrValue(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}