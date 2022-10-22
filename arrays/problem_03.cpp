#include <iostream>
#include <climits>
using namespace std;

int FindSecondLargest(int arr[], int N)
{
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for (int i = 0; i < N; i++)
        if (largest < arr[i]) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest && second_largest < arr[i])
            second_largest = arr[i];
    
    return second_largest;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = FindSecondLargest(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}