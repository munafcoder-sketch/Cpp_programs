#include <iostream>
using namespace std;

int revnum(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main(void)
{

    int number = 8974562;
    cout << "YOur number before inverting : " << number << endl;
    cout << "YOur number after inverting : " << revnum(number) << endl;

    system("pause");

    return 0;
}