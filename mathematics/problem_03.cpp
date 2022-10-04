#include <iostream>
using namespace std;

bool IsPalindrome(int N)
{
    int temp = N;
    
    int rev_num = 0;
    while (N != 0) {
        int ld = N % 10;
        rev_num = rev_num * 10 + ld;
        N /= 10;
    }

    return temp == rev_num;
}

int main()
{
    int num;
    cin >> num;

    bool result = IsPalindrome(num);
    cout << result << endl;

    return 0;
}