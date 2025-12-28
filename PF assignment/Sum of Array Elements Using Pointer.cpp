#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr; // pointer points to first element of array
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += *(ptr + i); // access array elements using pointer
    }

    cout << "Sum of array elements = " << sum << endl;

    return 0;
}
