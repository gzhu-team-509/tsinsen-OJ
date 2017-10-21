#include <iostream>
using namespace std;

int i = 0;
int a, b, c, d, e, f, g;

int main()
{
    while (i < 64)
    {
        a = (i / 32) % 2;
        b = (i / 16) % 2;
        c = (i / 8) % 2;
        d = (i / 4) % 2;
        e = (i / 2) % 2;
        f = i % 2;
        cout << a << b << c << d << e << f << endl;
        i++;
    }
    return 0;
}
