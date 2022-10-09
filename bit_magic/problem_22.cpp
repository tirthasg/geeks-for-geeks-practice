#include <iostream>
#include <algorithm>
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

int LongestConsecutiveSetBits(int N)
{
    int size = sizeof(int) * 8;

    int largest = 0;
    int i = 0;
    int j = 0;
    while (j < size) {
        while (j < size && !(N & (1 << j)))
            j++;
        
        i = j;
        while (j < size && (N & (1 << j)))
            j++;
        
        largest = max(largest, j - i);
    }

    return largest;
}

int main()
{
    int num;
    cin >> num;

    BinaryRepresentation(num);

    int result = LongestConsecutiveSetBits(num);
    cout << result << endl;
    
    return 0;
}