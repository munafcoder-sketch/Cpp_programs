#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num_std, num_courses;
    cout << "Enter number of students in class : " << endl;
    cin >> num_std;
    cout << "Enter number of courses : " << endl;
    cin >> num_courses;
    string std_name[num_std], std_courses[num_courses];
    // int std_score[num_std][num_courses];

    for (string &name : std_name) // ✔ use string reference
    {
        cout << "Enter name of student: ";
        cin >> name;
    }

    for (int i = 0; i < num_courses; i++) // ✔ print
    {
        cout << "Enter name of " << i + 1 << " course : ";
        cin >> std_courses[i];
    }

    system("pause");
    return 0;
}