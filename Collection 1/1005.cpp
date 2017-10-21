#include <iostream>
using namespace std;

int a = 1, b = 0, c = 0;

int main()
{
    while (a < 10)
    {
        while (b < 10)
        {
            while (c < 10)
            {
                if (a * a * a + b * b * b + c * c * c == a * 100 + b * 10 + c)
                {
                    cout << a << b << c << endl;
                }
                c++;
            }
            b++;
            c = 0;
        }
        a++;
        b = c = 0;
    }
}
