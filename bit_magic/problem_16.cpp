#include <iostream>
using namespace std;

int XorOfAll(int N)
{
    int rem = N % 4;
    switch (rem) {
        case 0: return N;
        case 1: return 1;
        case 2: return N + 1;
        case 3: return 0;
    }
}

int MissingNumber(int arr[], int N)
{
    int result = XorOfAll(N + 1);
    for (int i = 0; i < N; i++)
        result ^= arr[i];

    return result;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = MissingNumber(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}