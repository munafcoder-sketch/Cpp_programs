#include <iostream>
#include <string>
using namespace std;

class teacher
{
private:
    int salary;

public:
    string department;
    teacher()
    {
        cout << "hello I am constructor" << endl;
        department = "CS";
    }
    string name;
    int age = 20;
    void setsalary(int s)
    {
        salary = s;
    }
    int getsalary()
    {
        return salary;
    }

    void introduction()
    {
        cout << "My name is " << name << " and I am " << age << "year old" << " , my salray is " << salary << endl;
    }
};

class employee
{
private:
    int salary;

public:
    string name;
    string degree;
    int age;
    // to use the same varible as parameter you have to use pointer "this->" it represents the varible of objects
    employee(string name, string degree, int age)
    {
        this->name = name;
        this->degree = degree;
        this->age = age;
        // introduction(); wesa we can call the fuction in it but for your dumb brain I don't do this
    }
    void setsalary(int s)
    {
        salary = s;
    }
    int getsalary()
    {
        return salary;
    }
    void introduction()
    {
        cout << "Name : " << name << endl;
        cout << "Degree : " << degree << endl;
        cout << "age : " << age << endl;
    }
};

int main()
{
    teacher t1;
    t1.name = "Munaf Ahmed";
    t1.setsalary(5000);
    int my_salary = t1.getsalary();
    cout << my_salary << endl;
    t1.introduction();
    cout << endl
         << t1.department << endl;

    // the optimise way to use class is that
    employee e1("Munaf", "CS", 19);
    e1.setsalary(90000);
    e1.introduction();
    cout << e1.getsalary() << endl;
    system("pause");
    return 0;
}