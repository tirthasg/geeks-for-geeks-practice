#include <iostream>
#include <cmath>
using namespace std;

int DigitsInFactorial(int N)
{
    if (N == 0 || N == 1)
        return 1;

    double result = 0.0;
    for (int i = 2; i <= N; i++)
        result += log10(i);
    
    return result + 1;
}

int main()
{
    int num;
    cin >> num;

    int result = DigitsInFactorial(num);
    cout << result << endl;

    return 0;
}