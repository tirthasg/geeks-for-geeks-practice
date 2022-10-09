#include <iostream>
using namespace std;

bool IsPowerOfTwo(int N)
{
    return (N > 0) && (N & (N - 1)) == 0;
}

int main()
{
    int num;
    cin >> num;

    bool result = IsPowerOfTwo(num);
    cout << result << endl;

    return 0;
}