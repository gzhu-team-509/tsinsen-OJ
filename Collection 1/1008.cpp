#include <iostream>
using namespace std;

int main()
{
    int n, m, min = 10000, max = -10000;
    long sum = 0;
    cin >> n;
    while(n--)
    {
        cin >> m;
        sum += m;
        if (m < min) min = m;
        if (m > max) max = m;
    }
    cout << max << endl << min << endl << sum << endl;
}
