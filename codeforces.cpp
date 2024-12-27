#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

int main()
{
    while (true)
    {
        system("cls");

        char timeinformat[50];
        time_t rawtime;
        time(&rawtime);

        struct tm *currentime;

        currentime = localtime(&rawtime);

        // cout << currentime->tm_hour << endl;

        strftime(timeinformat, 50, "%I:%M:%S %p", currentime);
        cout << timeinformat << endl;

        Sleep(1000);
    }
};
