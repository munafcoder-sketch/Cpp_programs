#include <iostream>
using namespace std;

int main()
{
    int *arr = new int[5]; // dynamically allocate memory for 5 integers

    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i]; // take input
    }

    cout << "You entered:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // display values
    }
    cout << endl;

    delete[] arr; // free allocated memory
    arr = nullptr;

    system("pause");
    return 0;
}
