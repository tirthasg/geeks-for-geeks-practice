#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int MaxLength(int arr[], int N)
{
    int largest = INT_MIN;
    int length = 1;
    int prev = arr[0] & 1;
    for (int i = 1; i < N; i++) {
        int curr = arr[i] & 1;
        if (prev != curr)
            length++;
        else {
            largest = max(largest, length);
            length = 1;
        }
        prev = curr;
    }

    return max(largest, length);
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = MaxLength(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}