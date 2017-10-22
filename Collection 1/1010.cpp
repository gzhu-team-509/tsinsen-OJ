#include <cstdio>
#include <iostream>
using namespace std;

int n;

int main()
{
    char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    cin >> n;
    cout << hex[n / 16] << hex[n % 16] << endl;    
}
