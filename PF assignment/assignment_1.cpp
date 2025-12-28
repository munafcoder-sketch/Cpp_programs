#include <iostream>
using namespace std;

int main()
{
    int user_num, x;
    cout << "Enter any four digit number : ";
    cin >> user_num;
    x = (user_num + 8) / 3;
    x %= 5;
    x *= 5;

    cout << "The final result is : " << x << endl;

    return 0;
}