#include <iostream>
using namespace std;
// Enter two numbers from keyboard. Write a program to check if the two numbers are equal.
int main()
{
    cout << "Enter any two numbers to check wheater they are equal or not : " << endl;
    int a, b;
    cin >> a;
    cin >> b;
    if (a == b)
    {
        cout << "The both numbers are equall ";
    }
    else
    {
        cout << "The numbers are not same " << endl;
    }
    system("pause");
    return 0;
}