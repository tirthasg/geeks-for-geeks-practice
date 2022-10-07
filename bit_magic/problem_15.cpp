#include <iostream>
using namespace std;

int XorOfAllNaive(int N)
{
    int result = 0;
    for (int i = 1; i <= N; i++)
        result ^= i;

    return result;
}

int XorOfAll(int N)
{
    int rem = N % 4;
    switch(rem) {
        case 0: return N;
        case 1: return 1;
        case 2: return N + 1;
        case 3: return 0;
    }
}

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
        cout << i << ": " << XorOfAllNaive(i) << endl;
    cout << endl;
    
    for (int i = 1; i <= N; i++)
        cout << i << ": " << XorOfAll(i) << endl;

    return 0;
}

/*

N % 4 = 1 -> 1
N % 4 = 2 -> N + 1
N % 4 = 3 -> 0
N % 4 = 0 -> N

1: 1
2: 3
3: 0
4: 4

5: 1
6: 7
7: 0
8: 8

9: 1
10: 11
11: 0
12: 12

13: 1
14: 15
15: 0
16: 16

17: 1
18: 19
19: 0
20: 20

*/