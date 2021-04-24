#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <sstream>
#include "conversores.h"

using namespace std;

int binarioToDecimal(string binario){
    int decimal;
    reverse(binario.begin(), binario.end());

    for (unsigned int i = 0; i < binario.length(); i++) {
        if (binario[i] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

string decimalToBinario(int decimal){
    int resto;
    string binario;

    while (decimal > 0) {
        resto = decimal % 2;
        binario += (resto == 0 ? '0' : '1');
        decimal /= 2;
    }
    reverse(binario.begin(), binario.end());
    return binario;
}


int hexaToDecimal(string hexa){
    int bit;
    int decimal;
    reverse(hexa.begin(), hexa.end());

    for (unsigned int i = 0; i < hexa.length(); i++) {
        bit = (isdigit(hexa[i])) ? hexa[i] - 48 : hexa[i] - 55;
        decimal += bit * pow(16, i);
    }
    return decimal;
}

string decimalToHexa(int decimal) {
    printf("%X", decimal);
    return " ";
}


int octalToDecimal(int octal) {
    int decimal = 0, i = 0, resto;

    while(octal != 0) {
        resto = octal % 10;
        octal /= 10;
        decimal += resto * pow(8, i);
        i++;
    }
    return decimal;
}

int decimalToOctal(int decimal) {
    int resto, i = 1, octal = 0;

    while(decimal != 0) {
        resto = decimal % 8;
        decimal /= 8;
        octal += resto * i;
        i *= 10;
    }
    return octal;
}
