#include <iostream>
using namespace std;

// 1: Write a C++ program to swap the values of two integers using pointers.

void swap(int *a, int *b)
{
    int temp = *a; // store value of a
    *a = *b;       // put value of b into a
    *b = temp;     // put stored value into b
}

int main()
{
    int num_1 = 10, num_2 = 20;

    cout << "Before swaping the value" << endl;
    cout << "a = " << num_1 << " b = " << num_2 << endl;

    swap(&num_1, &num_2);
    cout << "After swaping the values are : " << endl;
    cout << "a = " << num_1 << " b = " << num_2 << endl;

    system("pause");
    return 0;
}