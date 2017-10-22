#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num[(int)(log2(2147483647)+1)];
    int a, p, head = 0;
    cin >> a >> p;
    while (a / p > 0)
    {
        num[head++] = a % p;
        a /= p;
    }
    num[head] = a;
    for (int i = head; i>=0; i--)
    {
        if (num[i] > 10)
        {
            num[i] -= 10;
            cout << (char)('A' + num[i]);
        } 
        else 
        {
            cout << num[i];
        }
    }
    cout << endl;
}
