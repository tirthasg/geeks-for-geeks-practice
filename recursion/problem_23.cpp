#include <iostream>
#include <string>
using namespace std;

int Power(int base, int exponent)
{
    int result = 1;
    while (exponent != 0) {
        if (exponent & 1)
            result *= base;

        base *= base;
        exponent >>= 1;
    }

    return result;
}

int Subsequence(string str, string result[])
{
    if (str.size() == 0) {
        result[0] = "";
        return 1;
    }

    int count = Subsequence(str.substr(1), result);
    for (int i = 0; i < count; i++)
        result[count + i] = str[0] + result[i];
    
    return count << 1;
}

int main()
{
    string str;
    cin >> str;

    int size = Power(2, str.size());
    string *result = new string[size];

    int count = Subsequence(str, result);
    for (int i = 0; i < size; i++)
        cout << result[i] << endl;

    return 0;
}