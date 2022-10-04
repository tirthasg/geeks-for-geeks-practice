#include <iostream>
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

/*

k = 0, 1, 2, 3, ...

6k -> {0, 6, 12, 18, 24, ...} -> 0, and rest are composite (No primes)
6k + 1 -> {1, 7, 13, 19, 25, ...} -> 1, some prime, and some composite
6k + 2 -> {2, 8, 14, 20, 26, ...} -> 2, and rest are composite (No primes, except 2)
6k + 3 -> {3, 9, 15, 21, 27, ...} -> 3, and rest are composite (No primes, except 3)
6k + 4 -> {4, 10, 16, 22, 28, ...} -> All composite (No primes)
6k + 5 -> {5, 11, 17, 23, 29, 35, ...} -> Some prime, and some composite

(6m + 1) * (6n + 1) = 36mn + 6(m + n) + 1 = 6k + 1
(6m + 1) * (6n + 5) = 36mn + 6(5m + n) + 5 = 6k + 5
(6m + 5) * (6n + 5) = 36mn + 6(5(m + n) + 4) + 1 = 6k + 1

(6k + 1) = a * b -> a & b are both of form (6m + 1) or (6m + 5)
(6k + 5) = a * b -> a & b is of form (6m + 1) and (6n + 5) respectively

N = a * b, and a <= b

(a <= b)
=> (ab <= b*b)
=> (N <= b*b)
=> (sqrt(N) <= b)

(a <= b)
=> (a*a <= a*b)
=> (a*a <= N)
=> (a <= sqrt(N))

=> (a <= sqrt(N) <= b)

*/

int main()
{
    int num;
    cin >> num;

    bool result = IsPrime(num);
    cout << result << endl;
    
    return 0;
}