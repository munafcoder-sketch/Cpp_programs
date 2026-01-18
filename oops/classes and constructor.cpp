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

    // right way to create copy construtor
    employee(employee &orgobj)
    {
        cout << "I am the custom copy constructor : " << endl;
        this->name = orgobj.name;
        this->degree = orgobj.degree;
        this->age = orgobj.age;
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
        cout << "salary : " << getsalary() << endl;
    }
};

// shallow copy
class students
{
public:
    string name;
    double *cgpaptr;
    students(string name, double cgpa)
    {
        this->name = name;
        this->cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    // // this is for shallow constructor
    // students(students &opj)
    // {
    //     this->name = opj.name;
    //     this->cgpaptr = opj.cgpaptr;
    // }

    //  to deep constructor we used
    students(students &obj)
    {
        this->name = obj.name;
        cgpaptr = new double;
        *cgpaptr = *obj.cgpaptr;
    }

    void getinfo()
    {
        cout << "name : " << name << endl;
        cout << "cgpa :" << *cgpaptr << endl;
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
    // to copy the same data we can do this like this
    employee e2(e1);
    e2.introduction();

    // shallow copy constructor
    // In shallow constructor there is a problem if we change the value of second or other data it will changes others first to
    // students s1("Munaf ahmed", 8);
    // s1.getinfo();
    // students s2(s1);
    // *s2.cgpaptr = 5.2;
    // s1.getinfo();

    // here is deep construtor example the above code is same but the main changes is in class instrutor
    students s1("Munaf ahmed", 8);
    s1.getinfo();
    students s2(s1);
    *s2.cgpaptr = 5.2; // here first data is save
    s1.getinfo();

    system("pause");
    return 0;
}