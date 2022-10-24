#include <iostream>
#include <vector>
using namespace std;

void GetIndices(vector<int> &arr, vector<int> &indices, int index, int key)
{
    if (index == arr.size())
        return;
        
    if (arr[index] == key)
        indices.push_back(index);
    
    GetIndices(arr, indices, index + 1, key);
}


int main()
{
    int N;
    cin >> N;
    
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    int key;
    cin >> key;
    
    vector<int> indices;
    GetIndices(arr, indices, 0, key);
    
    for (int ele : indices)
        cout << ele << endl;
        
    return 0;
}