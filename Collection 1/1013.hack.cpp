#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char num[9], * end;
    cin >> num;
    cout << strtoll(num, &end, 16) << endl;
}
