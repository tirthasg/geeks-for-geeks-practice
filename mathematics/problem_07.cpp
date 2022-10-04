#include <iostream>
using namespace std;

int GreatestCommonDivisor(int a, int b)
{
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    while (a != b)
        if (a < b)
            b -= a;
        else 
            a -= b;
    
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