#include <iostream>
using namespace std;

int MaximumAndValue(int arr[], int N)
{
    int result = 0;
    int size = sizeof(int) * 8;
    for (int pos = size - 1; pos >= 0; pos--) {
        int count = 0;
        for (int i = 0; i < N; i++)
            if ((arr[i] & (1 << pos)) && ((arr[i] & result) == result))
                count++;
        
        if (count >= 2)
            result |= (1 << pos);
    }

    return result;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = MaximumAndValue(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}