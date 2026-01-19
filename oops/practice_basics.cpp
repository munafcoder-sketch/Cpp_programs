#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int salary;
    string name;

public:
    // We can acess private data through constructor
    Employee(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }

    // we can also acess private data through fucntion or method
    void changeinfo(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }

    void showinfo()
    {
        cout << "Name : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    Employee emp("Munaf Ahmed", 50000);
    emp.showinfo();
    emp.changeinfo("Aayan", 60000);
    emp.showinfo();
    return 0;
}