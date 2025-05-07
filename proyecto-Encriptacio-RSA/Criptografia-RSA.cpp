#include "Calculo.h"
#include "Criptografia.h"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <tuple>

using namespace std;


int main() {
    DatoRSA rsa;
    int p, q;
    int opcion;
    vector<int> cifrado;
    string mensaje;
    string desencriptado;

    do {
        cout << "\n===== SISTEMA DE ENCRIPTACION RSA =====\n";
        cout << "1. Generar claves\n";
        cout << "2. Encriptar mensaje\n";
        cout << "3. Desencriptar mensaje\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            system("cls");
            cout << "\n\tNota: Para realizar un correcto descifrado se recomienda el uso"
                << "\n\tde primos minimos de 11,13 y 17 para poder obtener el mensaje corectamente"
                << "\n\tde otra forma puede tener errores con algunos datos que quiera desencriptar"
                << "\n\to encriptar. el modulo minimo para ASCII es de 120." << endl;
            cout << "\nIngrese dos numeros primos distintos:\n";
            cout << "\np = "; cin >> p;
            cout << "q = "; cin >> q;
            if (rsa.generarClaves(p, q)) {
                cout << "Claves generadas:\n";
                cout << "Clave publica: (e=" << rsa.get_E() << ", n=" << rsa.get_N() << ")\n";
                cout << "Clave privada: (d=" << rsa.get_D() << ", n=" << rsa.get_N() << ")\n";
            }
            else {
                cout << "\n\tError: p y q deben ser primos y distintos.\n";
            }
            break;

        case 2:
        {
            system("cls");
            cin.ignore();
            cout << "\nIngrese el mensaje a encriptar: ";
            getline(cin, mensaje);
            cifrado = rsa.encriptar(mensaje);
            guardarNumeros("cifrado.txt", cifrado);

            cout << "\nMensaje original: " << mensaje;
            cout << "\nMensaje encriptado: ";
            for (int n : cifrado) cout << n << " ";
            cout << "\n";

            cout << "\n\tMensaje encriptado correctamente.\n";
            break;
        }
        case 3:
        {
			cifrado = leerNumeros("cifrado.txt");
            //vector<int> cifradoLeido = leerNumeros("cifrado.txt");
            //if (cifradoLeido.empty()) {
			if (cifrado.empty()) {
                cout << "\n\tNo se encontro archivo de cifrado o esta vacio.\n";
            }
            else {
                desencriptado = rsa.desencriptar(cifrado);
                guardarTexto("descifrado.txt", desencriptado);
                cout << "\nMensaje desencriptado: " << desencriptado << endl;
            }
            break;
        }
        case 4:
            cout << "\n\tSaliendo del sistema...\n";
            break;

        default:
            cout << "\n\tOpcion no valida. Vuelve a intentarlo.....!\n";
            break;
        }
        
    } while (opcion != 4);

    return 0;
}