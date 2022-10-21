#include <iostream>
using namespace std;

int Factorial(int N)
{
    if (N == 0)
        return 1;
        
    return N * Factorial(N - 1);
}

int main()
{
    int N;
    cin >> N;

    int result = Factorial(N);
    cout << result << endl;
    
    return 0;
}