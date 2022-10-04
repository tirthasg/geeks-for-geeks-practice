#include <iostream>
using namespace std;

int Factorial(int N)
{
    if (N == 0 || N == 1)
        return 1;
    
    int result = 1;
    for (int i = 2; i <= N; i++)
        result *= i;
    
    return result;
}

int main()
{
    int num;
    cin >> num;

    int result = Factorial(num);
    cout << result << endl;

    return 0;
}