#include <iostream>
#include <climits>
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

bool IsSparse(int N)
{
    return (N & (N >> 1)) == 0;
}

int main()
{
    int num;
    cin >> num;

    BinaryRepresentation(num);

    bool result = IsSparse(num);
    cout << result << endl;

    return 0;
}