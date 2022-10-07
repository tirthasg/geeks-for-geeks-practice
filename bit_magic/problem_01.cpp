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

void SetBit(int &N, int k)
{
    int mask = (1 << k);
    N |= mask;
}

void SetOthers(int &N, int k)
{
    int mask = ~(1 << k);
    N |= mask;
}

bool CheckBit(int N, int k)
{
    int mask = (1 << k);
    return N & mask;
}

void ClearOthers(int &N, int k)
{
    int mask = (1 << k);
    N &= mask;
}

void ClearBit(int &N, int k)
{
    int mask = ~(1 << k);
    N &= mask;
}

void ToggleBit(int &N, int k)
{
    int mask = (1 << k);
    N ^= mask;
}

void ToggleOthers(int &N, int k)
{
    int mask = ~(1 << k);
    N ^= mask;
}

int main()
{
    int num, k;
    cin >> num >> k;

    int size = sizeof(int) * 8;
    k %= size;

    BinaryRepresentation(num);
    cout << CheckBit(num, k) << endl;
    
    SetBit(num, k);
    BinaryRepresentation(num);
    cout << CheckBit(num, k) << endl;

    ClearBit(num, k);
    BinaryRepresentation(num);
    cout << CheckBit(num, k) << endl;

    ToggleBit(num, k);
    BinaryRepresentation(num);
    cout << CheckBit(num, k) << endl;

    SetOthers(num, k);
    BinaryRepresentation(num);
    cout << CheckBit(num, k) << endl;

    ClearOthers(num, k);
    BinaryRepresentation(num);
    cout << CheckBit(num, k) << endl;

    ToggleOthers(num, k);
    BinaryRepresentation(num);
    cout << CheckBit(num, k) << endl;

    return 0;
}
