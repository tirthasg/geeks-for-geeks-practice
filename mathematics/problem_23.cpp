#include <iostream>
using namespace std;

bool HasThreePositiveDivisors(int N)
{
    if (N <= 1)
        return false;

    int count = 0;
    int d;
    for (d = 1; d * d < N; d++)
        if (N % d == 0)
            count++;
    
    if (d * d > N)
        d--;

    for (; d >= 1; d--)
        if (N % d == 0)
            count++;
    
    return count == 3;
}

int main()
{
    int num;
    cin >> num;

    bool result = HasThreePositiveDivisors(num);
    cout << result << endl;

    return 0;
}