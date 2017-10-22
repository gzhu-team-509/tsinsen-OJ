#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    char num[100001], * end;
    cin >> n;
    while (n--)
    {
        cin >> num;
        long long hex = strtoll(num, &end, 16);
        printf("%llo\n", hex);
    }
}
