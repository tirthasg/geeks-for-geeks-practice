#include <iostream>
using namespace std;

int SumOfDigits(int N)
{
    if (N == 0)
        return 0;

    return abs(N % 10) + SumOfDigits(N / 10);
}

int main()
{
    int N;
    cin >> N;

    int result = SumOfDigits(N);
    cout << result << endl;

    return 0;
}