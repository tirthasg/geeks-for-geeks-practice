#include <iostream>
using namespace std;

#define SIZE 256

void InitializeTable(int table[])
{
    table[0] = 0;
    for (int i = 1; i < SIZE; i++)
        table[i] = (i & 1) + table[i / 2];
}

void BinaryRepresentation(int N)
{
    int size = sizeof(int) * 8;
    for (int pos = size - 1; pos >= 0; pos--) {
        int mask = (1 << pos);
        cout << (N & mask ? 1 : 0);
    }
}

// int CountBits(int table[], int N)
// {
//     int count = 0;
//     int mask = 255;

//     int first_byte = N & mask;
//     count += table[first_byte];
//     mask <<= 8;

//     int second_byte = (N & mask) >> 8;
//     count += table[second_byte];
//     mask <<= 8;

//     int third_byte = (N & mask) >> 16;
//     count += table[third_byte];
//     mask <<= 8;

//     int fourth_byte = ((N & mask) >> 24) & 255;
//     count += table[fourth_byte];

//     return count;
// }

int CountBits(int table[], int N)
{
    int count = 0;
    int mask = SIZE - 1;

    int first_byte = (N & mask);
    count += table[first_byte];
    N >>= 8;

    int second_byte = (N & mask);
    count += table[second_byte];
    N >>= 8;

    int third_byte = (N & mask);
    count += table[third_byte];
    N >>= 8;

    int fourth_byte = (N & mask);
    count += table[fourth_byte];
    
    return count;
}

int main()
{
    int table[SIZE];
    InitializeTable(table);
    
    int t;
    cin >> t;

    while (t > 0) {
        int num;
        cin >> num;

        BinaryRepresentation(num);
        cout << ": ";
        cout << CountBits(table, num) << endl;
        
        t--;
    }

    return 0;
}