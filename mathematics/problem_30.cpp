#include <iostream>
using namespace std;

int BinaryGCD(int a, int b)
{
    if (!a || !b)
        return a | b;
    
    int result = 1;
    while (a && b) {
        if (!(a & 1) && !(b & 1)) {
            a >>= 1;
            b >>= 1;
            result <<= 1;
        }

        if (!(a & 1))
            a >>= 1;

        if (!(b & 1))
            b >>= 1;

        if (a < b)
            b -= a;
        else
            a -= b;
    }

    return result * (a | b);
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int result = BinaryGCD(num1, num2);
    cout << result << endl;

    return 0;
}