#include <iostream>
#include <climits>
using namespace std;

bool IsPowerOfTwo(int N)
{
    if (N <= 0)
        return false;
        
    int count = 0;
    while (N) {
        count++;
        N &= (N - 1);
    }

    return count == 1;
}

int main()
{
    int num;
    cin >> num;

    bool result = IsPowerOfTwo(num);
    cout << result << endl;

    return 0;
}