#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//  print array
void printarr(vector<int> &arr)
{
    // int size = arr.size();
    cout << "[ ";
    for (int element : arr)
    {
        cout << element << " ";
    }
    cout << "]" << endl;
}

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

// more optimise approach
int majorityelement(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int fre = 1, n = arr.size(), ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            fre++;
        }
        else
        {
            fre = 1;
            ans = arr[i];
        }
        if (fre < n / 2)
        {
            return ans;
        }
    }
    return -1;
}

int main()
{
    // calling functoin using brute method
    vector<int> myarr = {1, 1, 2, 1, 2, 1};
    printarr(myarr);
    cout << "The majority elements present in arr is : " << majele(myarr) << endl;

    // NOw using more optimise method
    cout << "The majority elemnts present in array is : " << majorityelement(myarr) << endl;

    system("pause");
    return 0;
}