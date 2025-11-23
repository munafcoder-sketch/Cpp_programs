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

int sumofdigit(int num)
{
    int digitsum = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        num /= 10;
        digitsum += lastdigit;
    }
    return digitsum;
}

int main(void)
{
    // Calling factorial function
    int n;
    cout << "Enter any number to find factorial : " << endl;
    cin >> n;
    cout << "The factorial of " << n << " is " << factorial(n) << endl;

    // Calling Mymin function
    cout << "Min value is: " << myMin(10, 20) << endl;

    // Calling printarr function
    int myarr[5] = {10, 40, 20, 30, 9};
    printarr(myarr, 5);
    cout << "Enter any number : " << endl;

    // calling sum of digit function
    int number;
    cin >> number;
    cout << "Ther sum of your number is " << sumofdigit(number) << endl;
    system("pause");
    return 0;
}