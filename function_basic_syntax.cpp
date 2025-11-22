#include <iostream>
#include <string>

using namespace std;
double factorial(int n)
{
    double fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int myMin(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

void printarr(int arr[], int size_arr)
{
    for (int i = 0; i <= size_arr; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    int n;
    cout << "Enter any number to find factorial : " << endl;
    cin >> n;
    cout << "The factorial of " << n << " is " << factorial(n) << endl;
    cout << "Min value is: " << min(10, 20) << endl;
    int myarr[5] = {10, 40, 20, 30, 9};
    printarr(myarr, 5);
    system("pause");
    return 0;
}