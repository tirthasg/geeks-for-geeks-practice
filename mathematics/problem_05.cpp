#include <iostream>
using namespace std;

int CountTrailingZeros(int N)
{
    int count = 0;
    while (N != 0) {
        count += N / 5;
        N /= 5;
    }

    return count;
}

int main()
{
    int num;
    cin >> num;

    int result = CountTrailingZeros(num);
    cout << result << endl;

    return 0;
}