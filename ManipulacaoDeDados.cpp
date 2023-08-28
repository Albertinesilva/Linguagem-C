#include <iostream>

using namespace std;

void vetor(int vect[], int tamanho);

int main()
{

    int vect[] = {1,2,3,4,5,6,7,8,9,10};
    int tamanho = 10;

    vetor(vect, tamanho);

    for(int i = 0; i < tamanho; i++){
        cout << vect[i] << endl;
    }

    // cout << "Informe um número: " << endl;
    // int num1 = 0;
    // cin >> num1;

    // cout << "Informe outro número: " << endl;
    // int num2 = 0;
    // cin >> num2;

    // cout << "\n"
    //      << num1 
    //      << " e " 
    //      << num2 
    //      << endl;

    return 0;
}

void vetor(int vect[], int tamanho){
    
    for(int i = 0; i < tamanho; i++){
        vect[i] = vect[i] * 2;
    }
}