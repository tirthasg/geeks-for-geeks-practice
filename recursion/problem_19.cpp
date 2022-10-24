#include <iostream>
using namespace std;

#define SIZE 100

void RemoveDuplicates(char str[])
{
    if (str[0] == '\0')
        return;
        
    // aaaaaabcdddeee0
    //aabcde0
    RemoveDuplicates(str + 1);
    if (str[0] != str[1])
        return;
    
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = str[i + 1];
}

int main()
{
    char str[SIZE + 1];
    cin >> str;
    cout << "Old string: " << str << endl;

    RemoveDuplicates(str);
    cout << "New string: " << str << endl;

    return 0;
}