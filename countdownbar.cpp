#include <iostream>
#include <unistd.h> // for usleep()
using namespace std;
int main()
{
    int seconds;
    cout << "Enter time in seconds: ";
    cin >> seconds;
    int totalSteps = seconds * 10; // 10 updates per second
    for (int step = 0; step <= totalSteps; step++)
    {
        float percent = (step / (float)totalSteps) * 100;
        cout << "\r[";
        // Print filled:
        for (int i = 0; i < step; i++)
            cout << "#";
        // Print remaining:
        for (int i = step; i < totalSteps; i++)
            cout << " ";
        cout << "] " << (int)percent << "% " << flush;

        usleep(100000); // 0.1 second delay
    }
    cout << "\nTime's up!" << endl;
    return 0;
}
