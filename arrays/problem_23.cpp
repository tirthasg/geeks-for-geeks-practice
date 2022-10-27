#include <iostream>
using namespace std;

int MaxProfit(int arr[], int N)
{
    int profit = 0;
    int i = 0;
    int j = 1;
    while (j < N) {
        while (j < N && arr[j - 1] < arr[j])
            j++;
        
        profit += arr[j - 1] - arr[i];
        i = j;
        j++;
    }

    return profit;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    int result = MaxProfit(arr, N);
    cout << result << endl;

    delete [] arr;

    return 0;
}