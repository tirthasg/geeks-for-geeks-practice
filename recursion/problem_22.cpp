#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Subsequence(string str, vector<string> &result)
{   
    if (str.size() == 0) {
        result.push_back(str);
        return;
    }

    Subsequence(str.substr(1), result);

    int size = result.size();
    for (int i = 0; i < size; i++)
        result.push_back(str[0] + result[i]);

}

int main()
{
    string str;
    cin >> str;
    
    vector<string> result;
    Subsequence(str, result);
    
    for (string subseq : result)
        cout << subseq << endl;
    
    return 0;
}