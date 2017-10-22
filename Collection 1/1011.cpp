#include <cstdio>
#include <iostream>
using namespace std;

long n;

int main()
{
    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};    
    int head = 0, num[8];
    cin >> n;
    while (n / 16 > 0)
    {
        num[head++] = n % 16;
        n /= 16;
    }
    num[head] = n % 16;
    while (head >= 0)
    {
        cout << hex[num[head--]];
    }
    cout << endl;
}
