#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(5, 2); // (5,2) 5 is the size of arr and 2 is number stored in each array

    cout << vec.size() << endl;
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << "\nAfter adding more element : \n";
    vec.push_back(3);
    vec.push_back(5);
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << "\nAfter removing last two elements : \n";
    vec.pop_back();
    vec.pop_back();
    for (int i : vec)
        cout << i << " ";
    // identify the unique number in array

    vector<int> myarr = {12, 4, 6, 8, 4, 12, 8};
    int ans = 0;
    for (int val : myarr)
    {
        ans = ans ^ val; //   ^ this is XOR it you know what is the function check your dawod dairy
    }
    cout << "\nThe unique value is " << ans << endl;
    for (int i : myarr)
    {
        cout << i << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}