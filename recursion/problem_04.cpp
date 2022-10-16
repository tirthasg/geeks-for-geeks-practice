#include <iostream>
#include <cstring>
using namespace std;

bool IsPalindrome(char str[], int start, int end)
{
    if (start >= end)
        return true;

    if (str[start] != str[end])
        return false;
    
    return IsPalindrome(str, start + 1, end - 1);
}

int main()
{
    char str[100];
    cin >> str;

    bool result = IsPalindrome(str, 0, strlen(str) - 1);
    cout << result << endl;

    return 0;
}