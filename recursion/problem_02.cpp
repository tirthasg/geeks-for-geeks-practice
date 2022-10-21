#include <iostream>
using namespace std;

void PrintDecreasing(int N)
{
    if (N == 0)
        return;
        
    PrintDecreasing(N - 1);
    cout << N << " ";
}

int main()
{
    int N;
    cin >> N;

    PrintDecreasing(N);
    return 0;
}