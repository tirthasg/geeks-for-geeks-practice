#include <iostream>
using namespace std;

void PrintDecreasing(int N)
{
    if (N == 0)
        return;
    
    cout << N << " ";
    PrintDecreasing(N - 1);
}

int main()
{
    int N;
    cin >> N;

    PrintDecreasing(N);
    return 0;
}