#include <iostream>
using namespace std;
int main()
{
    cout << "\t *******Welcome to my sweet programm*******" << endl;
    char again;
    do
    {
        cout << "Press 1 if you are resedential user" << endl;
        cout << "Press 2 if you're commercial user" << endl;
        cout << "Press 3 to exit" << endl;
        int choice, unit;
        float bill;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter number of units " << endl;
            cin >> unit;
            if (unit <= 200)
            {
                bill = unit * 10;
            }
            else if (unit <= 300)
            {
                bill = unit * 15;
            }
            else if (unit <= 400)
            {
                bill = unit * 20;
            }
            cout << "Your total bill is " << bill << endl;
            cout << "If you want to find another bill press y : ";
            cin >> again;
            break;
        case 2:
            cout << "Enter number of units " << endl;
            cin >> unit;
            if (unit <= 200)
            {
                bill = unit * 20;
            }
            else if (unit <= 300)
            {
                bill = unit * 30;
            }
            else if (unit <= 400)
            {
                bill = unit * 40;
            }
            cout << "Your total bill is " << bill << endl;
            cout << "If you want to find another bill press y : ";
            cin >> again;
            break;
        case 3:
            return 0;
        default:
            cout << "Please Enter valid number : ";
            break;
        }
    } while (again == 'y' || again == 'Y');
    system("pause");
    return 0;
}