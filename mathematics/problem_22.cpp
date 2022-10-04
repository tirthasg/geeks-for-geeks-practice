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

int GetTermOfGP(int a, int b, int N)
{
    if (a == 0 || b == 0)
        return 0;
    
    int r = b / a;
    return a * Power(r, N - 1);
}

int main()
{
    int a, b, N;
    cin >> a >> b >> N;

    int result = GetTermOfGP(a, b, N);
    cout << result << endl;

    return 0;
}