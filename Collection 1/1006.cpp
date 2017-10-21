#include <iostream>
using namespace std;

int a = 1, b = 0;

int main()
{
    while (a < 10)
    {
        while (b < 10)
        {
            cout << a << b << b << a << endl;
            b++;
        }
        a++;
        b = 0;
    }
}
