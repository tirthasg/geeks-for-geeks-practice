#include <iostream>
#include <algorithm>
using namespace std;

int MaxConsecutiveOnes(int arr[], int N)
{
    int largest = 0;
    int count = 0;
    for (int i = 0; i < N; i++)
        if (arr[i])
            count++;
        else {
            largest = max(largest, count);
            count = 0;
        }
    
    return max(largest, count);
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = MaxConsecutiveOnes(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}