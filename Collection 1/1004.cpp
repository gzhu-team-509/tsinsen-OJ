#include <iostream>
using namespace std;

void mk(int);

int n, m;

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        mk('A' + i);
    }
}

void mk(int a)
{
    int i = 0;
    int cur = a;
    while (i < m && cur > 'A')
    {
        cout << (char)cur--;
        i++;
    }
    while (i < m)
    {
        cout << (char)cur++;
        i++;
    }
    cout << endl;
}