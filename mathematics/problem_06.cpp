#include <iostream>
#include <algorithm>
using namespace std;

int GreatestCommonDivisor(int a, int b)
{
    if (a == 0)
        return b;

    if (b == 0)
        return a;

    int smallest = min(a, b);
    int largest = max(a, b);
    for (int d = smallest; d >= 1; d--)
        if (smallest % d == 0 && largest % d == 0)
            return d;
        
    return 1;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int result = GreatestCommonDivisor(num1, num2);
    cout << result << endl;

    return 0;
}