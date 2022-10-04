#include <iostream>
using namespace std;

int AbsoluteValue(int N)
{
    if (N < 0)
        return -N;
        
    return N;
}

int main()
{
    int num;
    cin >> num;

    int result = AbsoluteValue(num);
    cout << result << endl;

    return 0;
}