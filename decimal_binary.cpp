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

int bintodec(int num)
{
    int pow = 1, ans = 0;

    while (num > 0)
    {
        int rem = num % 10;
        ans += rem * pow;
        pow *= 2;
        num /= 10;
    }
    return ans;
}

int main()
{
    cout << "The binary number of 42 is : " << dec_converter(42) << endl;
    cout << "The binary number from 1 to 10 : " << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << dec_converter(i) << endl;
    }
    cout << "Write any Binary number to convert it into decimal number : " << endl;
    int n;
    cin >> n;
    cout << bintodec(n) << endl;
    system("pause");
    return 0;
}