#include <iostream>
#include <cmath>
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

int RSBPosition(int N)
{
    if (!N)
        return -1;

    int mask = (~N + 1);
    return log2(N & mask);
}

int main()
{
    int num;
    cin >> num;

    BinaryRepresentation(num);

    int result = RSBPosition(num);
    cout << result << endl;

    return 0;
}