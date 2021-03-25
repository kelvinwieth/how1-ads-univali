#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <chrono>
#include <thread>
#include "welcome.h"


#ifdef _WIN32
    #include <windows.h>

    void sleep(unsigned milliseconds)
    {
        Sleep(milliseconds);
    }
#else
    #include <unistd.h>

    void sleep(unsigned milliseconds)
    {
        usleep(milliseconds * 1000); // takes microseconds
    }
#endif

using namespace std;

// Loading
void loading() {

    cout << "Iniciando..." <<endl;
    sleep(1000);
    system ("CLS");
    cout << "0%" <<endl;
    sleep(1000);
    system ("CLS");
    cout << "11%..." <<endl;
    sleep(300);
    system ("CLS");
    cout << "39%..." <<endl;
    sleep(200);
    system ("CLS");
    cout << "61%..." <<endl;
    sleep(1000);
    system ("CLS");
    cout << "99%..." <<endl;
    sleep(1000);
    system ("CLS");
    cout << "100%..." <<endl;
    sleep(2000);
    system ("CLS");
}
