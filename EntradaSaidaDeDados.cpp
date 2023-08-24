#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "Estudando a entrada e saida de dados." << endl;
    cout << hex << 10 + 50 << endl;
    cout << setw(1000) << 10 + 50 << endl;

    cout << setw(10) << 1 << endl;
    cout << setw(10) << 2 << endl;
    cout << setw(10) << 3 << endl;
    cout << setw(10) << 4 << endl;

    cout << setw(10) << 1;
    cout << setw(10) << 2;
    cout << setw(10) << 3;
    cout << setw(10) << 4;

    return 0;
}