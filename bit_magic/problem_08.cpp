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

int CountSetBits(int N)
{
    int count = 0;
    while (N) {
        count++;
        N &= (N - 1);
    }

    return count;
}

int main()
{
    int num;
    cin >> num;

    BinaryRepresentation(num);

    int result = CountSetBits(num);
    cout << result << endl;

    return 0;
}