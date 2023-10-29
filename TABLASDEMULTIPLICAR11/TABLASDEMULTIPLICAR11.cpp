// TABLASDEMULTIPLICAR11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int NUM, I, RESUL;
    string linea;

    cout << "DIGITE UN NUMERO: ";
    cin >> linea;

    // Convert the input string to an integer
    NUM = stoi(linea);

    I = 1;

    while (I <= 12) {
        RESUL = NUM * I;
        cout << NUM << " * " << I << " = " << RESUL << endl;
        I++; 
    }

    cout << "PULSE UNA TECLA:  ";

    return 0;
}
