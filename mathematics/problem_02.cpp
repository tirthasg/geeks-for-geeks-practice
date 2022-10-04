#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int CountDigits(int N)
{
    if (N == 0)
        return 1;

    if (N < 0)
        N = abs(N);

    return log10(N) + 1;
}

int main()
{
    int num;
    cin >> num;

    int result = CountDigits(num);
    cout << result << endl;

    return 0;
}