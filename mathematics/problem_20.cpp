#include <iostream>
using namespace std;

long long Factorial(int N)
{
    if (N == 0 || N == 1)
        return 1;

    long long result = 1LL;
    for (int i = 2; i <= N; i++)
        result *= i;
    
    return result;
}

int main()
{
    int num;
    cin >> num;

    long long result = Factorial(num);
    cout << result << endl;

    return 0;
}