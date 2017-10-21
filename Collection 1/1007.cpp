#include <iostream>
using namespace std;

int n, a = 1, b = 0, c = 0;

int main()
{
    cin >> n;
    // 五位数
    while (a < 10)
    {
        while (b < 10)
        {
            while (c < 10)
            {
                if (a + b + c + b + a == n)
                {
                    cout << a << b << c << b << a << endl;
                }
                c++;
            }
            b++;
            c = 0;
        }
        a++;
        b = c = 0;
    }
    // 六位数
    a = 1; b = c = 0;
    while (a < 10)
    {
        while (b < 10)
        {
            while (c < 10)
            {
                if (a + b + c + c + b + a == n)
                {
                    cout << a << b << c << c << b << a << endl;
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
