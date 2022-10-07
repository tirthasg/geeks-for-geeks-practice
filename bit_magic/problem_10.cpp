#include <iostream>
using namespace std;

void BinaryRepresentation(int N)
{
    cout << "Binary representaion of " << N << ": ";

    int size = sizeof(int) * 8;
    for (int pos = size - 1; pos >= 0; pos--) {
        int mask = (1 << pos);
        cout << (N & mask ? 1 : 0);
    }
    cout << endl;
}

int BitDifference(int a, int b)
{
    int N = a ^ b;

    int count = 0;
    while (N) {
        count++;
        N &= (N - 1);
    }

    return count;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    BinaryRepresentation(num1);
    BinaryRepresentation(num2);

    int result = BitDifference(num1, num2);
    cout << result << endl;

    return 0;
}