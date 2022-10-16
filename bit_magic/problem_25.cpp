#include <iostream>
using namespace std;

int SwapEvenOddBits(int N)
{
    // Even mask -> 0x55555555
    // Odd mask -> 0xAAAAAAAA
    int even_mask = 0;
    
    int size = sizeof(int) * 8;
    for (int pos = size - 1; pos >= 0; pos--)
        if (!(pos & 1)) {
            int mask = (1 << pos);
            even_mask |= mask;
        }
    
    int odd_mask = even_mask << 1;

    int even_bits = (N & even_mask);
    int odd_bits = (N & odd_bits);

    return (even_bits << 1) | (odd_bits >> 1);
}

int main()
{
    int num;
    cin >> num;

    int result = SwapEvenOddBits(num);
    cout << result << endl;

    return 0;
}