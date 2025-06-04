#pragma once
#include "archivos.h"
#include "Calculo.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace System;
using namespace std;

class DatoRSA {
private:
    long long _p, _q, _n, _euler, _e, _d;
public:

    DatoRSA(long long p = 0, long long q = 0, long long n = 0, long long euler = 0, long long e = 0, long long d = 0)
        : _p(p), _q(q), _n(n), _euler(euler), _e(e), _d(d) {
    }


    bool generarClaves(long long p, long long q) {
        if (!esPrimo(p) || !esPrimo(q) || p == q) return false;
        _p = p;
        _q = q;
        _n = p * q;
        _euler = (p - 1) * (q - 1);

        _e = rand() % (_euler - 2) + 2;
        while (mcd(_e, _euler) != 1) ++_e;

        _d = modInverso(_e, _euler);

        mostrarClaves();

        return _d != -1;
    }

    string mostrarClaves() {
		ostringstream oss;
        oss << "publica: (e=" << _e << ", n=" << _n << ")\n";
        oss << "privada: (d=" << _d << ", n=" << _n << ")\n";
        oss << "p = " << _p << ", q = " << _q << ", n = " << _n << endl;
        oss << "euler = " << _euler << ", e = " << _e << ", d = " << _d << endl;
		return oss.str();
    }

    vector<long long> encriptar(const string& mensaje) {
        vector<long long> cifrado;
        for (char c : mensaje) {
            long long m = static_cast<long long>(c);
            long long ciph = hallarMod(m, _e, _n);
            cifrado.push_back(ciph);
        }
        return cifrado;
    }

    string desencriptar(const vector<long long>& cifrado) {
        string mensaje;
        for (long long ciph : cifrado) {
            long long m = hallarMod(ciph, _d, _n);
            mensaje += static_cast<char>(m);
        }
        return mensaje;
    }

    long long get_E() const { return _e; }
    long long get_D() const { return _d; }
    long long get_N() const { return _n; }

	void setE(long long e) { _e = e; }
	void setD(long long d) { _d = d; }
	void setN(long long n) { _n = n; }

};

