#include <iostream>
#include "conversores.h"
#include "inicio.h"

using namespace std;

extern int firstAction;
extern int nextAction;
int option = 0;

using namespace std;

int chooseConversor(int action) {

  switch(action) {
    case 1:
      if (option == 0) {
        cout << "1- Binario para Decimal\n2- Decimal para Binario" << endl;
        cin >> option;
      }
      system ("CLS");
      switch(option) {
        case 1:
            {
            string binario;
            cout << "Insira o binario: " << endl;
            cin >> binario;
            resultado();
            cout << binarioToDecimal(binario) << endl;
            break;
            }
        case 2:
            {
            int decimal;
            cout << "Insira o decimal: " << endl;
            cin >> decimal;
            resultado();
            cout << decimalToBinario(decimal) << endl;
            break;
            }
      }
      break;
    case 2:
      if (option == 0) {
        cout << "1- Octal para Decimal\n2- Decimal para Octal" << endl;
        cin >> option;
        system ("CLS");
      }
      switch(option) {
        case 1:
            {
            int octal;
            cout << "Insira o octal: " << endl;
            cin >> octal;
            resultado();
            cout << octalToDecimal(octal) << endl;
            break;
            }
        case 2:
            {
            int decimal;
            cout << "Insira o decimal: " << endl;
            cin >> decimal;
            resultado();
            cout << decimalToOctal(decimal) << endl;
            break;
            }
      }
      break;
    case 3:
      if (option == 0) {
        cout << "1- Hexa para Decimal\n2- Decimal para Hexa" << endl;
        cin >> option;
        system ("CLS");
      }
      switch(option) {
        case 1:
            {
            string hexa;
            cout << "Insira o hexa: " << endl;
            cin >> hexa;
            resultado();
            cout << hexaToDecimal(hexa) << endl;
            break;
            }
        case 2:
            {
            int decimal;
            cout << "Insira o decimal: " << endl;
            cin >> decimal;
            resultado();
            cout << decimalToHexa(decimal) << endl;
            break;
            }
      }
      break;
    case 4:
      cout << "Encerrando..." << endl;
      sleep(2000);
      break;
  }
}

void checkNextAction() {

  cout << "\n1- Refazer\n2- Retornar" << endl;
  cin >> nextAction;
  system ("CLS");

  if (nextAction == 1) {
    chooseConversor(firstAction);
    checkNextAction();
    }
  else {
    option = 0;
  }
  }


void mainMenu() {

  do {
    cout << "CONVERTER:\n\n1- Binario\n2- Octal\n3- Hexa\n4- Encerrar" << endl;
    cin >> firstAction;
  } while(firstAction < 0 || firstAction > 4);
    system ("CLS");

  chooseConversor(firstAction);
}
