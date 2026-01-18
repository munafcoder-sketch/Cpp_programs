#include <iostream>
#include <array>
#include <algorithm>
#include <string>

using namespace std;

void printarr(array<int, 5> myarr)
{
    for (int i = 0; i < 5; i++)
        cout << myarr.at(i) << " , ";
    cout << endl;
}

int main()
{
    array<int, 5> arr = {1, 4, 2, 6, 3};
    int *ptr1 = arr.begin();
    int *ptr2 = arr.end() - 1;

    sort(arr.begin(), arr.end());
    printarr(arr);

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;

    array<string, 6> colors = {"red", "yellow", "green", "blue", "black"};
    bool found = find(colors.begin(), colors.end(), "green");
    cout << "The red color " << (found ? "was " : "wasn't ") << "present in the array " << endl;

    int *arrptr = new int[5]{4, 76, 3, 78, 2};
    for (int i = 0; i < 5; i++)
    {
        cout << arrptr[i] << " ";
    }
    delete[] arrptr;

    int *myptr = new int;
    *myptr = 10;
    cout << *myptr << endl;
    delete myptr;

    int colorsize = colors.size();
    cout << colorsize << endl;

    int length = sizeof(colors) / sizeof(colors.at(0));
    cout << length << endl;
    return 0;
}