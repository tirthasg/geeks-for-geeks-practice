#include <iostream>
using namespace std;

double CelciusToFahrenheit(double cel)
{
    return (cel / 5.0)  * 9.0 + 32.0;
}

int main()
{
    double cel;
    cin >> cel;

    double result = CelciusToFahrenheit(cel);
    cout << result << endl;

    return 0; 
}