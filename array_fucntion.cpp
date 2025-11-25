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

int main()
{
    int size = 4, smallest, largest;
    int myarr[size] = {4, 9, 89, 67};
    min_max(myarr, size, smallest, largest);
    cout << "The min vlaue is : " << smallest << " and the maximum is : " << largest << endl;

    system("pause");
    return 0;
}