#include <iostream>
using namespace std;

int Power(int base, int exponent)
{
    if (base == 0 || exponent == 1)
        return base;

    int result = 1;
    for (int i = 1; i <= exponent; i++)
        result *= base;

    return result;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int result = Power(num1, num2);
    cout << result << endl;

    return 0;
}