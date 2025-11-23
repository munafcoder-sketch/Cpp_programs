#include <iostream>
#include <string>

using namespace std;

int dec_converter(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int main()
{
    cout << dec_converter(42);
    return 0;
}