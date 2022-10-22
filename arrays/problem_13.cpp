#include <iostream>
#include <climits>
using namespace std;

int MaximumDifference(int arr[], int N)
{
    int largest = INT_MIN;
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (largest < arr[j] - arr[i])
                largest = arr[j] - arr[i];
    
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