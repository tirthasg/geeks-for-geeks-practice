#include <iostream>
#include <climits>
using namespace std;

int MaxSubarraysSum(int arr[], int N)
{
    // for (int start = 0; start < N; start++)
    //     for (int end = start; end < N; end++) {
    //         int sum = 0;
    //         for (int i = start; i <= end; i++)
    //             sum += arr[i];
    //         cout << sum << endl;
    //     }

    int largest = INT_MIN;
    for (int start = 0; start < N; start++) {
        int sum = 0;
        for (int end = start; end < N; end++) {
            sum += arr[end];

            if (largest < sum)
                largest = sum;
        }    
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

    int result = MaxSubarraysSum(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}