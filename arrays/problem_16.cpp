#include <iostream>
#include <map>
using namespace std;

void FindFrequencies(int arr[], int N)
{
    map<int, int> frequency;
    for (int i = 0; i < N; i++)
        if (frequency.count(arr[i]))
            frequency[arr[i]]++;
        else 
            frequency[arr[i]] = 1;

    for (auto kvp : frequency)
        cout << kvp.first << " " << kvp.second << endl;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    FindFrequencies(arr, N);

    delete [] arr;

    return 0;
}