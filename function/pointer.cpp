#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
using namespace std;

// pass by value

void increment(int x)
{
    x = x + 1;
}

int main()
{
    int a = 10;
    increment(a);
    cout << a << endl;

    // array and pointer
    int arr[] = {1, 5, 3, 6, 7, 8, 12};
    // assigning array adderess to pointer varible
    int *ptr1 = arr;
    // it prints address of array of first index
    cout << ptr1 << endl;
    // we can acess array index through pointer like this
    cout << ptr1[0] << endl;
    // it prints the address of 3rd index of array
    cout << ptr1 + 2 << endl;

    system("pause");
    return 0;
}