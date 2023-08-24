#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{

    int varInt = 100;
    char c = 'r';
    double pFlutuante = 5.99;

    cout << "O valor da variavel var Int é: " << varInt << endl;
    cout << "O valor da variavel C é: " << c << endl;
    cout << "O valor da variavel pFlutuante é: " << pFlutuante << endl;

    cout << "\nMemória da variavel varInt: " << sizeof(varInt) << " bytes" << endl;
    cout << "Memória da variavel C: " << sizeof(c) << " bytes" << endl;
    cout << "Memória da variavel pFlutuante: " << sizeof(pFlutuante) << " bytes" << endl;

    return 0;
}
