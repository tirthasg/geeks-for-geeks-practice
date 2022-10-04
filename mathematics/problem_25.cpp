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

bool HasThreePositiveDivisors(int N)
{
    if (N <= 1)
        return false;

    int root = sqrt(N);
    if (root * root != N)
        return false;
    
    return IsPrime(root);
}

int CountAllThreePositiveDivisors(int N)
{
    int count = 0;
    for (int i = 1; i <= N; i++)
        if (HasThreePositiveDivisors(i))
            count++;
    
    return count;
}

int main()
{
    int num;
    cin >> num;

    int count = CountAllThreePositiveDivisors(num);
    cout << count << endl;

    return 0;
}