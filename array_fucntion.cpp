#include <iostream>
#include <climits>

using namespace std;

void min_max(int arr[], int size, int &smallest, int &largest)
{
    smallest = INT_MAX;
    largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        largest = max(arr[i], largest);
    }
}

void inp_arr(int arr[], short int size)
{
    cout << "Enter vlaues to store in array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
}

void print_arr(int arr[], short int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int short size = 4;
    int smallest, largest;
    // My array
    int myarr[size] = {4, 9, 89, 67};
    cout << "Default array " << endl;
    print_arr(myarr, size);
    min_max(myarr, size, smallest, largest);
    cout << "The min vlaue is : " << smallest << " and the maximum is : " << largest << endl;

    // input array
    int user_arr[size];
    inp_arr(user_arr, size);
    cout << "YOur array : " << endl;
    print_arr(user_arr, size);
    min_max(user_arr, size, smallest, largest);
    cout << "The min vlaue is : " << smallest << " and the maximum is : " << largest << endl;

    system("pause");
    return 0;
}