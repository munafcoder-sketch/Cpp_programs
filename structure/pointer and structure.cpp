#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    float cgpa;
};

void update(student *s)
{
    s->cgpa = 4.0;
}

int main()
{
    student s1 = {"Munaf", 20, 3.8};
    update(&s1);

    student *ptr = &s1; // pointer to structure

    // ptr-> = *ptr

    cout << ptr->name << endl;
    cout << ptr->age << endl;
    cout << ptr->cgpa << endl;

    return 0;
}
