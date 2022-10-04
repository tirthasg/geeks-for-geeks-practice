#include <iostream>
#include <algorithm>
using namespace std;

int LeastCommonMultiple(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;
    
    int largest = max(a, b);
    int smallest = min(a, b);
    
    int multiple = largest;
    while (!(multiple % largest == 0 && multiple % smallest == 0))
        multiple++;
    
    return multiple;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int result = LeastCommonMultiple(num1, num2);
    cout << result << endl;
    
    return 0;
}