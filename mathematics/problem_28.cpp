#include <iostream>
using namespace std;

int MultiplicationUnderModulo(long long a, long long b)
{
    int M = 1e9 + 7;
    return ((a % M) * (b % M)) % M;
}

int main()
{
    long long num1, num2;
    cin >> num1 >> num2;

    int result = MultiplicationUnderModulo(num1, num2);
    cout << result << endl;

    return 0;
}