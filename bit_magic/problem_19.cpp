#include <iostream>
using namespace std;

bool CheckBit(int N, int k)
{
    return (N >> k) & 1;
}

int main()
{
    int num, k;
    cin >> num >> k;

    bool result = CheckBit(num, k);
    cout << result << endl;
    
    return 0;
}