#include <iostream>
#include <algorithm>
using namespace std;

bool IsSorted(int arr[], int N)
{
    if (N == 0 || N == 1)
        return true;
        
    if (arr[0] < arr[1])
        return IsSorted(arr + 1, N - 1);
    
    return false;
}

int main()
{
    int arr[] = {3, 5, 1, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = IsSorted(arr, size);
    cout << result << endl;

    sort(arr, arr + size);
    result = IsSorted(arr, size);
    cout << result << endl;

    return 0;
} 