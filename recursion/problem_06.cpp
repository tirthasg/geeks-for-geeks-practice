#include <iostream>
#include <vector>
#include <string>
using namespace std;

void GetSubsequence(string str, vector<string> &result)
{
    if (str.size() == 0) {
        result.push_back("");
        return;
    }
    
    GetSubsequence(str.substr(1, str.size()), result);
    
    int N = result.size();
    for (int i = 0; i < N; i++)
        result.push_back(str[0] + result[i]);
}

int main(){
    string str;
    cin >> str;
    
    vector<string> result;
    GetSubsequence(str, result);
    
    for (string s : result)
        cout << s << endl;
    
    // int cnt = 0;
    // cout << '[';
    // for (string s : result){
    //     if (cnt != result.size() - 1)
    //         cout << s << ", ";
    //     else
    //         cout << s;
    //     cnt++;
    // }
    // cout << ']';
    
    return 0;
}