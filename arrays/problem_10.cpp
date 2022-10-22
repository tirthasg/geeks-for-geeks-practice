#include <iostream>
using namespace std;

void FindLeaders(int arr[], int N)
{
    for (int i = 0; i < N; i++) {
        int value = arr[i];
        bool is_leader = true;
        for (int j = i + 1; j < N; j++)
            if (value <= arr[j]) {
                is_leader = false;
                break;
            }
        
        if (is_leader)
            cout << value << " ";
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