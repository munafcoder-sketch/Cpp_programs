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

    // maximum number and minimum number present in array
    int arr[] = {3, 6, 12, 65, 2, 23, 75};
    int size2 = sizeof(arr) / 4;
    cout << "New array : ";
    printarr(size2, arr);
    cout << "The maximum number present in above array is : " << *max_element(arr, arr + size2) << endl;
    cout << "The minimum number present in above array is : " << *min_element(arr, arr + size2) << endl;

    // find function
    int arr1[] = {1, 4, 6};

    if (find(arr1, arr1 + 3, 4) != arr1 + 3)
        cout << "Found";
    else
        cout << "Not Found";

    cout << endl;

    // how many elements are present in array so we use count
    int arr2[] = {1, 2, 2, 3, 6, 7, 12, 2, 14, 15, 2, 54, 23, 2};
    cout << count(arr2, arr2 + 4, 2) << endl;

    // binary search
    int arr3[] = {1, 2, 3, 4, 5};

    if (binary_search(arr3, arr3 + 5, 3))
        cout << "Found" << endl;

    system("pause");
    return 0;
}