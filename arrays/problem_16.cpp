#include <iostream>
#include <algorithm>
using namespace std;

void FindFrequency(int arr[], int N)
{
    int j = 0;
    int count = 1;
    for (int i = 1; i < N; i++)
        if (arr[j] == arr[i])
            count++;
        else {
            cout << arr[j] << " " << count << endl;
            count = 1;
            j = i;
        }
    
    cout << arr[j] << " " << count << endl;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    sort(arr, arr + N);
    FindFrequency(arr, N);

    delete [] arr;

    return 0;
}