#include <iostream>
#include <string>
using namespace std;
int main()
{
    string std_name[3];

    cout << "Enter name of students: \n";
    for (string &name : std_name) // ✔ use string reference
    {
        cin >> name;
    }

    for (const string &name : std_name) // ✔ print
    {
        cout << name << " ";
    }

    system("pause");
    return 0;
}