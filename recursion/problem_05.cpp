#include <iostream>
#include <cstdlib>
using namespace std;

int CountDigits(int N)
{
    if (abs(N) < 10)
        return 1;

    return 1 + CountDigits(N / 10);
}

int main()
{
    int N;
    cin >> N;

    int result = CountDigits(N);
    cout << result << endl;

    return 0;
}