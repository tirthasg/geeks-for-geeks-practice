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

bool IsSparse(int N)
{
    int size = sizeof(int) * 8;
    
    int i = 0;
    int j = 1;
    while (j < size) {
        int b1 = (N & (1 << i)) ? 1 : 0;
        int b2 = (N & (1 << j)) ? 1 : 0;
        if (b1 & b2)
            return false;
        
        i++;
        j++;
    }

    return true;
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