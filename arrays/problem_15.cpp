#include <iostream>
#include <climits>
using namespace std;

int MaxDifference(int arr[], int N)
{
    int result = INT_MIN;
    int largest = INT_MIN;
    for (int i = N - 2; i >= 0; i--) {
        if (largest < arr[i + 1])
            largest = arr[i + 1];
        
        int diff = largest - arr[i];
        if (result < diff)
            result = diff;
    }

    return result;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = MaxDifference(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}