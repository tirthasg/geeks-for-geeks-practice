#include <iostream>
#include <climits>
using namespace std;

int MaxANDValue(int arr[], int N)
{   
    int largest = INT_MIN;
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (largest < (arr[i] & arr[j]))
                largest = arr[i] & arr[j];
    
    return largest;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = MaxANDValue(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}