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
    if (!N)
        return 0;

    int count = 0;
    int size = sizeof(int) * 8;
    for (int pos = 0; pos < size; pos++) {
        int mask = (1 << pos);
        if (N & mask)
            count++;
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