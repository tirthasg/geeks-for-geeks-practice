#include <iostream>
using namespace std;

int SumOfArray(int arr[], int N)
{
    if (N == 0)
        return 0;
        
    return arr[0] + SumOfArray(arr + 1, N - 1);
}

int main()
{
    int arr[] = {3, 5, 1, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = SumOfArray(arr, size);
    cout << result << endl;

    return 0;
}