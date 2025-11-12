#include <iostream>
#include <unistd.h>
#include <cstdlib>
using namespace std;
int main(void)
{
    int second;
    cout << "Enter time in second : ";
    cin >> second;
    while (second < 0)
    {
        system("clear");
        cout << "Time left : " << second << " seconds\n";
        sleep(1);
        second--;
    }
    system("cls");
    cout << "Times up : " << endl;
    return 0;
}