#include <iostream>
using namespace std;

void mk(int);

int main()
{
    for (int i = 0; i < 25; i++)
    {
        mk('A' + i);
    }
}

void mk(int a)
{
    int i = 0;
    int cur = a;
    while (i < 18 && cur > 'A')
    {
        cout << (char)cur--;
        i++;
    }
    while (i < 18)
    {
        cout << (char)cur++;
        i++;
    }
    cout << endl;
}