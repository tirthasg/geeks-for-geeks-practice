#include <iostream>
using namespace std;

void SeiveOfEratosthenes(int N)
{
    if (N <= 1)
        return;
    
    bool *primes = new bool[N + 1];
    for (int i = 2; i <= N; i++)
        primes[i] = true;

    for (int i = 2; i * i <= N; i++)
        if (primes[i])
            for (int j = i * i; j <= N; j += i)
                primes[j] = false;
    
    for (int i = 2; i <= N; i++)
        if (primes[i])
            cout << i << " ";
    cout << endl;
}

/*
        sqrt(N) <= p <= N
    =>  N <= p*p <= N*2
*/

int main()
{
    int num;
    cin >> num;

    SeiveOfEratosthenes(num);

    return 0;
}