#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
using namespace std;

// Brute approach
vector<int> pairsum(vector<int> arr, int target)
{
    int n = arr.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                return ans;
            }
        }
    }
    return ans;
}

// usig optamastic method
vector<int> PairSum(vector<int> arr, int target)
{
    int n = arr.size();
    vector<int> ans;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int Mysum = arr[i] + arr[j];
        if (target > Mysum)
        {
            i++;
        }
        else if (target < Mysum)
        {
            j--;
        }
        else
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            return ans;
        }
    }
    cout << "Your targated number doesn't exsit";
    return ans;
}

int main()
{
    vector<int> myarr = {2, 6, 7, 15, 17};
    int target = 13;
    vector<int> ans = PairSum(myarr, target);
    cout << ans[0] << " " << ans[1] << endl;
    system("pause");
    return 0;
}