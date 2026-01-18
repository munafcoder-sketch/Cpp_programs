#include <iostream>
using namespace std;

bool isPrime(int n)
{ // Function to check if number is prime
    if (n <= 1)
        return false; // numbers <=1 are not prime
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false; // divisible → not prime
    }
    return true; // no divisor → prime
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is a Prime Number.";
    else
        cout << num << " is NOT a Prime Number.";
}
