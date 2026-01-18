#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    int age;
    string name;

    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void getinfo()
    {
        cout << "name: " << name << endl;
        cout << "age : " << age << endl;
    }
};

// we are using virtual here because Diamond problem occurs when a class inherits from two classes that have a common base class, resulting in ambiguity.

class student : virtual public person
{
public:
    double rollnumber;

    student(string name, int age, double rollnumber)
        : person(name, age)
    {
        this->rollnumber = rollnumber;
    }

    void stdinfo()
    {
        getinfo();
        cout << "rollnumber : " << rollnumber << endl;
    }
};

class Teacher : virtual public person
{
public:
    string department;
    int salary;

    Teacher(string name, int age, string department, int salray)
        : person(name, age)
    {
        this->department = department;
        this->salary = salray;
    }

    void teacherintro()
    {
        getinfo();
        cout << "department : " << department << endl;
        cout << "salary : " << salary << endl;
    }
};

class MSstd : public student, public Teacher
{
public:
    string degree;

    MSstd(string name, int age, double rollnumber,
          string department, int salary, string degree)
        : person(name, age),
          student(name, age, rollnumber),
          Teacher(name, age, department, salary)
    {
        this->degree = degree;
    }

    void MSintro()
    {
        getinfo(); //
        cout << "rollnumber : " << rollnumber << endl;
        cout << "department : " << department << endl;
        cout << "salary : " << salary << endl;
        cout << "degree : " << degree << endl;
    }
};

int main()
{
    MSstd m1("Munaf Ahmed", 19, 98, "Computer Science", 50000, "bs cyber security");
    m1.MSintro();
    return 0;
}
