#include <iostream>
using namespace std;

int GreatestCommonDivisor(int a, int b)
{
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    int rem = b % a;
    while (rem != 0) {
        b = a;
        a = rem;
        rem = b % a;
    }

    return a;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int result = GreatestCommonDivisor(num1, num2);
    cout << result << endl;

    return 0;
}