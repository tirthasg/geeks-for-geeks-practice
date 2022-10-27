#include <iostream>
using namespace std;

int MaxProfit(int arr[], int N)
{
    int profit = 0;
    for (int i = 1; i < N; i++)
        if (arr[i - 1] < arr[i])
            profit += arr[i] - arr[i - 1];

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