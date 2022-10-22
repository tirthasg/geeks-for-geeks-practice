#include <iostream>
#include <climits>
using namespace std;

void FindLeaders(int arr[], int N)
{
    int largest = INT_MIN;
    for (int i = N - 1; i >= 0; i--) {
        if (arr[i] > largest) {
            cout << arr[i] << " ";
            largest = arr[i];
        }
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    FindLeaders(arr, N);

    delete [] arr;
    
    return 0;
}