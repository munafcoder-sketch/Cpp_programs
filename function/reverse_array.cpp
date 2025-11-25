#include <iostream>
using namespace std;

void print_arr(int arr[], short int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

void reversearr(int arr[], int size)
{
    int starting = 0, ending = size - 1;
    while (starting < ending)
    {
        swap(arr[starting], arr[ending]);
        starting++, ending--;
    }
    cout << "The reverse array is : " << endl;
    print_arr(arr, size);
}

int main()
{
    int myarr[5] = {4, 6, 8, 9, 12}, user_arr[5];
    cout << "The orignal array is : " << endl;
    print_arr(myarr, 5);
    reversearr(myarr, 5);

    // USer array
    inp_arr(user_arr, 5);
    cout << "The orignal array is : " << endl;
    print_arr(user_arr, 5);
    reversearr(user_arr, 5);

    system("pause");
    return 0;
}