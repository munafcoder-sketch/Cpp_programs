#include <iostream>
using namespace std;

int main()
{
    const int array_size = 5;
    int arr[array_size], i, j, temp;
    cout << "Program for sorting an array in Assending order" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter the number " << i << " : ";
        cin >> arr[i];
    }
    cout << "Your array : [";
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << "]";
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[] =
            }
        }
    }

    return 0;
}