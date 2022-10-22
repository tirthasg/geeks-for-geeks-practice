#include <iostream>
using namespace std;

int FirstIndex(int arr[], int N, int key)
{
    if (N == 0)
        return -1;
        
    if (arr[0] == key)
        return 0;
    
    int result = FirstIndex(arr + 1, N - 1, key);
    if (result == -1)
        return result;
    
    return 1 + result;
}

int main()
{
    int arr[] = {2, 3, 5, 1, 3, 1, 5, 4, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 4;
    int result = FirstIndex(arr, size, key);
    cout << result << endl;

    key = 100;
    result = FirstIndex(arr, size, key);
    cout << result << endl;

    return 0;
}