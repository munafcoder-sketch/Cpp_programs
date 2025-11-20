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
    int std_score[num_std][num_courses], total_marks = 0, class_total;
    float average, class_average;

    // taking students name input and store it in array
    for (string &name : std_name)
    {
        cout << "Enter name of student: ";
        cin >> name;
    }

    // Taking name of courses input and save in array
    for (int i = 0; i < num_courses; i++)
    {
        cout << "Enter name of " << i + 1 << " course : ";
        cin >> std_courses[i];
    }

    // Storing score in array, clacluating total and average
    for (int i = 0; i < num_std; i++)
    {
        cout << "Enter score of : " << std_name[i] << endl;
        for (int j = 0; j < num_courses; j++)
        {
            cout << "Enter obtain marks in : " << std_courses[j] << endl;
            cin >> std_score[i][j];
            total_marks += std_score[i][j];
        }
        cout << "Total marks obtianed by " << std_name[i] << " is " << total_marks;
        average = float(total_marks) / num_courses;
        cout << "Average obtained by : " << std_name[i] << " " << average;
        class_total += total_marks;
    }
    class_average = float(total_marks) / num_std;
    cout << "The class average is " << class_average;
    system("pause");
    return 0;
}