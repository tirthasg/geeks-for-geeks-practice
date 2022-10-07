#include <iostream>
using namespace std;

int Power(int base, int exponent)
{
    if (base == 0 || exponent == 1)
        return base;

    int result = 1;
    while (exponent != 0) {
        if (exponent & 1)
            result *= base;

        base = base * base;
        exponent >>= 1;
    }
    
    return result;
}

void GeneratePowerSet(int arr[], int N)
{
    int nrows = Power(2, N);
    for (int counter = 0; counter < nrows; counter++) {
        for (int i = 0; i < N; i++) {
            int mask = (1 << i);
            if (counter & mask)
                cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    GeneratePowerSet(arr, N);

    delete [] arr;

    return 0;
}