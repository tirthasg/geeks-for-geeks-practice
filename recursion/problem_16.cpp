#include <iostream>
using namespace std;

bool IsPalindrome(int arr[], int start, int end)
{
    if (start >= end)
        return true;

    if (arr[start] != arr[end])
        return false;

    return IsPalindrome(arr, start + 1, end - 1);
}

int main()
{
    int arr1[] = {3, 5, 1, 4, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    bool result = IsPalindrome(arr1, 0, size1 - 1);
    cout << result << endl;

    int arr2[] = {1, 2, 3, 2, 1};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    result = IsPalindrome(arr2, 0, size2 - 1);
    cout << result << endl;

    return 0;
}