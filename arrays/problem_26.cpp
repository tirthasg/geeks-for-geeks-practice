#include <iostream>
using namespace std;

int MaxConsecutiveOnes(int arr[], int N)
{
    int largest = 0;
    int i = 0;
    while (i < N) {
        while (i < N && arr[i] == 0)
            i++;
        
        int count = 0;
        while (i < N && arr[i]) {
            count++;
            i++;
        }

        if (largest < count)
            largest = count;
    }

    return largest;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = MaxConsecutiveOnes(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}