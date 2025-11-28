#include <iostream>
#include <vector>
using namespace std;

// brute method
int majele(vector<int> &arr)
{
    short n = arr.size();
    for (int val : arr)
    {
        int fre = 0;
        for (int ele : arr)
        {
            if (val == ele)
                fre++;
        }
        if (fre > n / 2)
        {
            return val;
        }
    }
    return -1;
}
int main()
{
    vector<int> myarr = {1, 1, 2, 1, 2, 1};
    cout << "The majority elements present in arr is : " << majele(myarr) << endl;

    system("pause");
    return 0;
}