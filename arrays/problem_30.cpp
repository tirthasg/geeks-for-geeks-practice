#include <iostream>
#include <climits>
using namespace std;

int MaxSubarraySum(int arr[], int N)
{
    int largest = INT_MIN;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
        if (largest < sum)
            largest = sum;
        
        if (sum < 0)
            sum = 0;
    }

    return largest;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = MaxSubarraySum(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}