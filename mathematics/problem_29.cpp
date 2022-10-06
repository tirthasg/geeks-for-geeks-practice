#include <iostream>
using namespace std;

int BinaryGCD(int a, int b)
{
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    int result = 1;
    while (a != b) {
        int two_power = 1;
        while (!((a & 1) || (b & 1))) {
            a >>= 1;
            b >>= 1;
            two_power <<= 1;
        }
        result *= two_power;

        while ((a & 1) == 0)
            a >>= 1;
        
        while ((b & 1) == 0)
            b >>= 1;

        if (a < b)
            b = (b - a) >> 1;
        else if (a > b)
            a = (a - b) >> 1;
    }

    return result * a;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int result = BinaryGCD(num1, num2);
    cout << result << endl;

    return 0;
}