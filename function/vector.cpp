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
    cout << "\n After adding more element : \n";
    vec.push_back(3);
    vec.push_back(5);
    for (int i : vec)
    {
        cout << i << " ";
    }
    cout << "After removing last two elements : \n";
    vec.pop_back();
    vec.pop_back();
    for (int i : vec)
        cout << i << " ";
    system("pause");
    return 0;
}