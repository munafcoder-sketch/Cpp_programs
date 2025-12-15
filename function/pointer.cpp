#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
using namespace std;

// pass by value

void increment(int x)
{
    x = x + 1;
}

int main()
{
    int a = 10;
    increment(a);
    cout << a << endl;

    system("pause");
    return 0;
}