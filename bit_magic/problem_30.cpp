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

int BinaryToGray(int N)
{
    return N ^ (N >> 1);
}

int main()
{
    int N;
    cin >> N;
    BinaryRepresentation(N);

    int result = BinaryToGray(N);
    cout << result << endl;
    BinaryRepresentation(result);

    return 0;
}