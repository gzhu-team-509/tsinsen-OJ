#include <iostream>
using namespace std;

int main()
{
    int n, c, max = -1000, min = 1000, secmax = -1000, secmin = 1000;
    long sum = 0;
    cin >> n;
    while (n--)
    {
        cin >> c;
        if (c > max) {secmax = max; max = c;}
        else if (c > secmax) secmax = c;
        if (c < min) {secmin = min; min = c;}
        else if (c < secmin) secmin = c;
        sum += c * c;
    }
    cout << secmax << endl << secmin << endl << sum << endl;
}
