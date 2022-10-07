#include <iostream>
#include <climits>
using namespace std;

void BinaryRepresentation(int N)
{
    cout << "Binary representation of " << N << ": ";
    
    int size = sizeof(int) * 8;
    for (int pos = size - 1; pos >= 0; pos--) {
        int mask = (1 << pos);
        cout << (N & mask ? 1: 0);
    }
    cout << '\n';
}

int main()
{
    for (int N = 0; N <= 1024; N++)
        BinaryRepresentation(N);
    
    return 0;
}