#include <iostream>
#include <string>
#include <vector>
using namespace std;

void GetCombination(int N, vector<string> &result, vector<string> &keypad)
{
    if (N == 0) {
        result.push_back("");
        return;
    }
    
    GetCombination(N / 10, result, keypad);
    
    int digit = N % 10;
    string str = keypad[digit];
    
    int length = str.size();
    int size = result.size();
    for (int i = 0; i < length - 1; i++) 
        for (int i = 0; i < size; i++)
            result.push_back(result[i]);

    int index = 0;
    for (char ch : str) {
        for (int i = index; i < index + size; i++)
            result[i] += ch;
        index += size;
    }
}

int main()
{
    int N;
    cin >> N;

    vector<string> keypad = {"", "", "abc", "def", "ghi", 
                             "jkl", "mno", "pqrs","tuv","wxyz"};
    

    vector<string> result;
    GetCombination(N, result, keypad);
    
    for (string comb : result)
        cout << comb << endl;
    
    return 0;
}