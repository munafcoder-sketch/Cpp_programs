#include <iostream>
#include <string>

using namespace std;

struct student
{
    string name;
    int age;
    double roll_number;
    float cgpa;
};

int main(void)
{
    // the basic way to access structure is
    student s1{
        "Munaf Ahmed", 19, 98, 8.5};
    cout << "name : " << s1.name << endl;
    cout << "age : " << s1.age << endl;
    cout << "roll number : " << s1.roll_number << endl;
    cout << "cgpa : " << s1.roll_number << endl;

    // another way
    student s2;
    s2.name = "Aayan";
    s2.age = 19;
    s2.roll_number = 83;
    s2.cgpa = 7;

    cout << "name : " << s2.name << endl;
    cout << "age : " << s2.age << endl;
    cout << "roll number : " << s2.roll_number << endl;
    cout << "cgpa : " << s2.roll_number << endl;
    system("pause");
}
