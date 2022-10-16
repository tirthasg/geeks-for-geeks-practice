#include <iostream>
using namespace std;

void PrintNToOne(int N)
{
    if (N == 0)
        return;
    
    cout << N << " ";
    PrintNToOne(N - 1);
}

int main()
{
    int N;
    cin >> N;

    PrintNToOne(N);
    return 0;
}