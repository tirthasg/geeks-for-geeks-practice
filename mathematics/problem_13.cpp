#include <iostream>
using namespace std;

void PositiveDivisors(int N)
{
    int d;
    for (d = 1; d * d < N; d++)
        if (N % d == 0)
            cout << d << " ";
     
    if (d * d > N)
        d--;

    for (; d >= 1; d--)
        if (N % d == 0)
            cout << N / d << " ";
    cout << endl;
}

int main()
{
    int num;
    cin >> num;

    PositiveDivisors(num);

    return 0;
}