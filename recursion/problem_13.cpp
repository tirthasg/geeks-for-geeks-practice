#include <iostream>
using namespace std;

int LastIndex(int arr[], int N, int key)
{
    if (N == 0)
        return -1;
        
    int result = LastIndex(arr + 1, N - 1, key);
    if (result != -1)
        return 1 + result;
    
    if (arr[0] == key)
        return 0;
    
    return -1;
}

int main()
{
    int arr[] = {2, 3, 5, 1, 3, 1, 5, 4, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key = 4;
    int result = LastIndex(arr, size, key);
    cout << result << endl;

    key = 100;
    result = LastIndex(arr, size, key);
    cout << result << endl;

    return 0;
}