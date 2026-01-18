#include <iostream>
#include <vector>
using namespace std;

void printarr(vector<int> vec, int sizeofvec)
{
    for (int i = 0; i < sizeofvec; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1 = {1, 3, 5, 7, 9};
    vector<int> vec2 = {2, 4, 6, 8, 10};
    cout << "Before changing arrays : " << endl;
    printarr(vec1, 5);
    printarr(vec2, 5);
    cout << "Size of array are : " << vec1.size() << endl;
    vec1.push_back(11);
    vec2.push_back(12);
    cout << "After adding more elements : " << endl;
    printarr(vec1, 6);
    printarr(vec2, 6);
    cout << "Size of array are : " << vec1.size() << endl;

    vector<int> comvec;
    comvec.insert(comvec.begin(), vec1.begin(), vec1.end());
    int length = comvec.size();
    printarr(comvec, length);
    comvec.insert(comvec.end(), vec2.begin(), vec2.end());
    int length2 = comvec.size();
    printarr(comvec, length2);

    return 0;
}