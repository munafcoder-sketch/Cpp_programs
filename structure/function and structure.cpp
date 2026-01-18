#include <iostream>
#include <string>
using namespace std;

struct students
{
    string name;
    string dep;
    int age;
    float cgpa;

    void printinfo()
    {
        cout << "name : " << name << endl;
        cout << "department : " << dep << endl;
        cout << "age : " << age << endl;
        cout << "cgpa : " << cgpa << endl;
    }
};
void getinfo(students &s)
{
    cin >> s.name;
    cin >> s.dep;
    cin >> s.age;
    cin >> s.cgpa;
}

int main()
{
    students s1 = {"Munaf Ahmed", "CY", 19, 9.2};
    students s2;
    getinfo(s2);
    s2.printinfo();
    s1.printinfo();

    return 0;
}
