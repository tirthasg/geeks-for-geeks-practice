#include <iostream>
#include <climits>
using namespace std;

int FindLargest(int arr[], int N)
{
    int largest = INT_MIN;
    for (int i = 0; i < N; i++)
        if (largest < arr[i])
            largest = arr[i];
    
    return largest;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = FindLargest(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}