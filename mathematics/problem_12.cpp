#include <iostream>
using namespace std;

void PrimeFactorization(int N)
{
    if (N <= 0)
        return;
    
    int d = 2;
    while (N % d == 0) {
        cout << d << " ";
        N /= d;
    }

    d = 3;
    while (N % d == 0) {
        cout << d << " ";
        N /= d; 
    }

    for (d = 5; d * d <= N; d += 6) {
        while (N % d == 0) {
            cout << d << " ";
            N /= d;
        }

        while (N % (d + 2) == 0) {
            cout << d + 2 << " ";
            N /= (d + 2);
        }
    }

    if (N > 3)
        cout << N;
    cout << endl;
}

int main()
{
    int num;
    cin >> num;

    PrimeFactorization(num);

    return 0;
}