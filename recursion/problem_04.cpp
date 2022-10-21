#include <iostream>
using namespace std;

int SumOfNaturals(int N)
{
    if (N == 0)
        return 0;

    return N + SumOfNaturals(N - 1);
}

int main()
{
    int N;
    cin >> N;

    int result = SumOfNaturals(N);
    cout << result << endl;

    return 0;
}