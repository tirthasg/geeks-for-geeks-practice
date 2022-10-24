#include <iostream>
using namespace std;

#define SIZE 100

void RemoveChar(char str[])
{
    if (str[0] == '\0')
        return;
        
    RemoveChar(str + 1);
    if (str[0] != 'x')
        return;
    
    // xbxdxe0
    // xbde0
    // bde0

    for (int i = 0; str[i] != '\0'; i++)
        str[i] = str[i + 1];
}

int main()
{
    char str[SIZE + 1];
    cin >> str;
    cout << "Old string: " << str << endl;
    
    RemoveChar(str);
    cout << "New string: " << str << endl;
    
    return 0;
}