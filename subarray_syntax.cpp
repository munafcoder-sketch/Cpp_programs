#include <iostream>
#include <vector>
using namespace std;

int main()
{
    short n = 6;
    vector<short> arr = {2, 5, 8, 9, 3, 7};
    vector<short> myarr = {1, 2, 3, 4, 5, 6};
    // For printing subarray through loops
    for (int start = 0; start < n; start++)
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

    system("pause");
    return 0;
}