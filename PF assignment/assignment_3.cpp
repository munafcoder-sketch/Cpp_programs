#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two values : " << endl;
    cin >> a;
    cin >> b;
    if (a < 50 || a < b)
    {
        cout << "a is less then 50 or a is less then " << b << endl;
    }
    else
    {
        cout << "a is not less then 50 or " << b << endl;
    }
    system("pause");
    return 0;
}