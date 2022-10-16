#include <iostream>
using namespace std;

void BinaryRepresentation(int N)
{
    cout << "Binary representation of " << N << ": ";
    
    int size = sizeof(int) * 8;
    for (int pos = size - 1; pos >= 0; pos--) {
        int mask = (1 << pos);
        cout << (N & mask ? 1 : 0);
    }
    cout << endl;
}

void OnesComplement(int &N)
{
    N = ~N;
}

void TwosComplement(int &N)
{
    // -N
    // ~N + 1
    // ~(N - 1)
    OnesComplement(N);
    N++;
}

int main()
{
    int num;
    cin >> num;

    BinaryRepresentation(num);

    OnesComplement(num);
    BinaryRepresentation(num);

    TwosComplement(num);
    BinaryRepresentation(num);

    return 0;
}