#include <iostream>
#include <stack>
using namespace std;

void FindLeaders(int arr[], int N)
{
    stack<int> leaders;
    for (int i = N - 1; i >= 0; i--) {
        if (leaders.empty())
            leaders.push(arr[i]);
        else if (arr[i] > leaders.top())
            leaders.push(arr[i]);
    }

    while (!leaders.empty()) {
        int value = leaders.top();
        cout << value << " ";
        leaders.pop();
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