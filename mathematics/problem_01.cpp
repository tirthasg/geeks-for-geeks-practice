#include <iostream>
using namespace std;

int CountDigits(int N)
{
    if (N == 0)
        return 1;
    
    int count = 0;
    while (N != 0) {
        count++;
        N /= 10;
    }

    return count;
}

int main()
{
    int num;
    cin >> num;

    int result = CountDigits(num);
    cout << result << endl;

    return 0;
}