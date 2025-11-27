#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void printarr(short arr[], short size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int main()
{
    short n = 6, num = 7;
    int max_sum = INT_MIN;
    vector<short> arr = {3, -4, 5, 4, -1, 7, -8};
    short myarr[n] = {1, 2, 3, 4, 5, 6};
    // For printing subarray through loops
    cout << "Printing subarray of : " << endl;
    printarr(myarr, n);
    for (short start = 0; start < n; start++)
    {
        for (short end = start; end < n; end++)
        {
            for (short i = start; i <= end; i++)
            {
                cout << myarr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    // for calculating maximum sum of sub array
    for (short start = 0; start < num; start++)
    {
        int Curr_sum = 0;
        for (short end = start; end < num; end++)
        {
            Curr_sum += arr[end];
            max_sum = max(Curr_sum, max_sum);
        }
    }
    cout << "\nThe maximum sum of subarray is : " << max_sum << endl;
    int kadane_sum = INT_MIN;
    int curr_sum = 0;
    // calculating maximum sum using kadane's algorithm "Most optimise way"
    for (short i = 0; i < num; i++)
    {
        curr_sum += arr[i];
        kadane_sum = max(curr_sum, kadane_sum);
        if (curr_sum < 0)
            curr_sum = 0;
    }
    cout << "The maximum sum of subarray by using Kadane's algorithm : " << kadane_sum << endl;
    system("pause");
    return 0;
}