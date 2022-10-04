#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<double> GetRoots(double a, double b, double c)
{
    vector<double> roots;

    int D = b * b - 4 * a * c;
    if (D < 0) {
        roots.push_back(-1.0);
        return roots;    
    }

    double root1 = (-b + sqrt(D)) / (2 * a);
    double root2 = (-b - sqrt(D)) / (2 * a);

    roots.push_back(root1);
    roots.push_back(root2);

    return roots;
}

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    vector<double> result = GetRoots(a, b, c);
    for (vector<double>::iterator it = result.begin(); it != result.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}