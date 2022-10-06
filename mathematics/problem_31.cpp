#include <iostream>

#define _USE_MATH_DEFINE
#include <cmath>

using namespace std;

int DigitsInFactorial(int N)
{   
    if (N == 0 || N == 1)
        return 1;

    double term1 = 0.5 * log10(2 * M_PI * N);
    double term2 = N * log10(N / M_E);

    return term1 + term2 + 1;
}

int main()
{
    int num;
    cin >> num;

    int result = DigitsInFactorial(num);
    cout << result << endl;

    return 0;
}