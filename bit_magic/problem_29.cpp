#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int MaximumOrValue(int arr[], int N)
{
    int largest = INT_MIN;
    for (int i = 0; i < N; i++)
        largest = max(largest, arr[i]);

    int result = largest;
    for (int i = 0; i < N; i++)
        result = max(result, largest | arr[i]);
    
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