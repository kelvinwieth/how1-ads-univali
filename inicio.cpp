#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <chrono>
#include <thread>


// Decorações <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
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

void wait(int time){
    sleep(time);
    system ("CLS");
}

// Loading
void introduction() {

    cout <<"" <<endl;
    cout << "====================================================================================" <<endl;
    cout << "                                                                                    " << endl;
    cout << "                 UNIVALI 2021 - ANALISE E DESENVOLVIMENTO DE SISTEMAS               " <<endl;
    cout << "                                                                                    " << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                                                                                    " << endl;
    cout << "                             HANDS ON WORK 1/2021                                   " <<endl;
    cout << "                                                                                    " << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "                                                                                    " << endl;
    cout << "                    PROJETO: CONVERSOR DE BASES NUMERICAS                           " << endl;
    cout << "                                                                                    " << endl;
    cout << "====================================================================================" << endl;
    wait(5000);
    cout <<           "Desenvolvido por: Kelvin Wieth, Maicon Rodrigues e Maria Grando           " <<endl;
    wait(3000);
}

void loading() {

    cout << "Iniciando..." <<endl;
    wait(1000);
    cout << "0%" <<endl;
    wait(1000);
    cout << "11%..." <<endl;
    wait(300);
    cout << "34%..." <<endl;
    wait(200);
    cout << "63%..." <<endl;
    wait(1100);
    cout << "98%..." <<endl;
    wait(1000);
    cout << "99%..." <<endl;
    wait(1300);
    cout << "100%..." <<endl;
    wait(2000);
    introduction();
    system ("CLS");
}

void resultado() {

    system ("CLS");
    cout << "Processando..." << endl;
    wait(1000);
    cout << "RESULTADO:\n" << endl;
}
