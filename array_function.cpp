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

int search(int arr[], int short size, int short target)
{
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            return i;
        }
    }
    return -1;
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

    int target;
    int secretarr[10] = {20, 9, 89, 45, 3, 6, 8, 3, 1, 7};
    cout << "Enter any number : " << endl;
    cin >> target;
    int guess = search(secretarr, 10, target);
    if (guess >= 0)
    {
        cout << "Bro you guess right : " << endl;
    }
    else
    {
        cout << "Hahah you lose losser : " << endl;
    }
    cout << "The hidden numbers are : " << endl;
    print_arr(secretarr, 10);

    system("pause");
    return 0;
}