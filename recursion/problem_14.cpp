#include <iostream>
using namespace std;

void AllIndex(int arr[], int N, int key, int result[], int &res_size)
{
    if (N == 0)
        return;
        
    AllIndex(arr + 1, N - 1, key, result, res_size);
    if (arr[0] != key) {
        for (int i = 0; i < res_size; i++)
            result[i]++;
        
        return;
    }
    
    for (int i = res_size; i > 0; i--)
        result[i] = result[i - 1] + 1;
    
    result[0] = 0;
    res_size++;
}

int main()
{
    int arr[] = {2, 3, 5, 1, 3, 1, 5, 4, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int *result = new int[size];
    for (int i = 0; i < size; i++)
        result[i] = -1;

    int key = 4;
    int res_size = 0;
    AllIndex(arr, size, key, result, res_size);
    
    for (int i = 0; i < res_size; i++)
        cout << result[i] << " ";
    cout << endl;

    for (int i = 0; i < size; i++)
        result[i] = -1;
    
    key = 100;
    res_size = 0;
    AllIndex(arr, size, key, result, res_size);

    for (int i = 0; i < res_size; i++)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}