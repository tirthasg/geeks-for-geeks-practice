#include <iostream>
using namespace std;

int LinearSearch(int arr[], int N, int key)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == key)
            return i;
    
    return -1;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    int key;
    cin >> key;

    int result = LinearSearch(arr, N, key);
    cout << result << endl;

    delete [] arr;

    return 0;
}