#include <iostream>
using namespace std;

void BinaryRepresentation(int N)
{
    int size = sizeof(int) * 8;
    for (int pos = size - 1; pos >= 0; pos--) {
        int mask = (1 << pos);
        cout << (N & mask ? 1 : 0);
    }
    cout << endl;
}

int GrayToBinary(int N)
{
    int result = N;
    while (N) {
        N >>= 1;
        result ^= N;
    }
    
    return result;
}

int main()
{
    int N;
    cin >> N;
    BinaryRepresentation(N);

    int result = GrayToBinary(N);
    cout << result << endl;
    BinaryRepresentation(result);

    return 0;
}