#include <iostream>
#include <cstdlib>
using namespace std;

int CountDigit(int N, int digit)
{
    if (abs(N) < 10)
        return (abs(N) == digit);

    int result = CountDigit(N / 10, digit);
    if (abs(N % 10) == digit)
        result++;
    
    return result;
}

int main()
{
    int N, digit;
    cin >> N >> digit;

    int result = CountDigit(N, digit);
    cout << result << endl;
    
    return 0;
}