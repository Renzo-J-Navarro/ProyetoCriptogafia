#pragma once
#include "archivos.h"
#include "Calculo.h"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <tuple>

using namespace std;

class DatoRSA {
private:
    int _p, _q, _n, _euler, _e, _d;
public:
    
    DatoRSA(int p = 0, int q = 0, int n = 0, int euler = 0, int e = 0, int d = 0)
        : _p(p), _q(q), _n(n), _euler(euler), _e(e), _d(d) {}

 
    bool generarClaves(int p, int q) {
        if (!isPrime(p) || !isPrime(q) || p == q) return false;
        _p = p;
        _q = q;
        _n = p * q;
        _euler = (p - 1) * (q - 1);

        _e = 3;
        while (mcd(_e, _euler) != 1) ++_e;

        _d = modInverso(_e, _euler);
       
        cout << "p = " << _p << ", q = " << _q << endl;
        cout << "n = " << _n << ", euler = " << _euler << endl;
        cout << "e = " << _e << ", d = " << _d << endl;
        
		return _d != -1;
    }

    vector<int> encriptar(const string& mensaje) {
        vector<int> cifrado;
        for (char c : mensaje) {
            int m = static_cast<int>(c);
            int ciph = hallarMod(m, _e, _n);
            cifrado.push_back(ciph);
        }
        return cifrado;
    }

    string desencriptar(const vector<int>& cifrado) {
        string mensaje;
        cout << "\nDescifrando...\n";
        for (int ciph : cifrado) {
            int m = hallarMod(ciph, _d, _n);
            cout << "\nCifrado: " << ciph << " -> ASCII: " << m << " -> Mensaje: " << static_cast<char>(m) << endl;
            mensaje += static_cast<char>(m);
        }
        return mensaje;
    }

    int get_E() const { return _e; }
    int get_D() const { return _d; }
    int get_N() const { return _n; }
};

