#include <iostream>
#include <array>
#include <iomanip> //is used to format output—like setting width, precision, fill characters, and alignment in C++.
using namespace std;

int main()
{
    array<int, 5> n = {10, 50, 78, 34, 59};
    cout << "Element" << setw(13) << "value" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << setw(7) << i << setw(13) << n[i] << endl;
    }
    system("pause");
    return 0;
}