#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int N)
{
    if (N <= 1)
        return false;

    if (N == 2 || N == 3)
        return true;

    if (N % 2 == 0 || N % 3 == 0)
        return false;

    for (int d = 5; d * d <= N; d += 6)
        if (N % d == 0 || N % (d + 2) == 0)
            return false;

    return true;
}

int CountAllThreePositiveDivisors(int N)
{
    int count = 0;

    int root = sqrt(N);
    for (int i = 1; i <= root; i++)
        if (IsPrime(i))
            count++;
    
    return count;
}

int main()
{
    int num;
    cin >> num;

    int result = CountAllThreePositiveDivisors(num);
    cout << result << endl;

    return 0;
}