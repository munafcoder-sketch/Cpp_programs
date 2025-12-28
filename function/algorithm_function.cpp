#include <iostream>
#include <algorithm>
using namespace std;

void printarr(int size, int myarr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << myarr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // sorting
    int myarr[] = {3, 6, 2, 7, 6, 12, 16, 17};
    cout << "Youre array is " << endl;
    int size = sizeof(myarr) / sizeof(myarr[1]);
    printarr(size, myarr);

    sort(myarr, myarr + size);
    cout << "Array sorted in Assending order : ";
    printarr(size, myarr);

    // to sort in descending order we can also reverse the array
    reverse(myarr, myarr + size);
    printarr(size, myarr);

    // sort array in dessending order
    cout << "Array sorted is desending order : ";
    sort(myarr, myarr + size, greater<>());
    printarr(size, myarr);
    system("pause");
    return 0;
}