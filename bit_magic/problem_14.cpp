#include <iostream>
#include <cmath>
using namespace std;

void FindOddOccuringElements(int arr[], int N)
{
    int result = 0;
    for (int i = 0; i < N; i++)
        result ^= arr[i];

    int mask = (~N + 1);
    int pos = (N & mask);

    int num1 = 0;
    for (int i = 0; i < N; i++)
        if (arr[i] & pos)
            num1 ^= arr[i];
    
    int num2 = num1 ^ result;
    int smaller = num1 <= num2 ? num1 : num2;
    int larger = num1 <= num2 ? num2 : num1;

    cout << smaller << " " << larger << endl;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    FindOddOccuringElements(arr, N);

    delete [] arr;

    return 0;
}