#include <iostream>
using namespace std;

void PrintOneToN(int N)
{
    if (N == 0)
        return;
        
    PrintOneToN(N - 1);
    cout << N << " ";
}

int main()
{
    int N;
    cin >> N;

    PrintOneToN(N);
    return 0;
}