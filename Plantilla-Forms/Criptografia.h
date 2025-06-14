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

    vector<long long> valores_D_Validos() const {
        vector <long long > validarD;
        for (long long i = 2; i < _euler; i++)
        {
            if (mcd(i, _euler) == 1) {
                validarD.push_back(i);
            }
        }
        return validarD;
    }

    bool generarClaves(long long p, long long q, long long select_d = -1) {
        if (!esPrimo(p) || !esPrimo(q) || p == q) return false;
        _p = p;
        _q = q;
        _n = p * q;
        _euler = (p - 1) * (q - 1);

        if (select_d != -1)
        {
            if (select_d > 1 && select_d < _euler && mcd(select_d, _euler) == 1) 
            {
                _d = select_d;
            }
            else
            {
                return false;
            }
        }
        else
        {
            _d = rand() % (_euler - 2) + 2;
            while (mcd(_d, _euler) != 1) {
                ++_d;
            }
        }

        _e = modInverso(_d, _euler);

        if (_d == -1) {
            return false;
        }
        return true;
    }

    string establecer_d_interactivo() {
        ostringstream oss;

        vector<long long> opcion_d = valores_D_Validos();

        oss << "-- Valores válidos para 'e' --" << "\n";
        if (opcion_d.empty()) {}
        else
        {
            int contador = 0;
            for (long long val : opcion_d) {
                oss << val << " ";
                contador++;
                if (contador % 10 == 0) { oss << "\n"; }
                if (contador >= 20) { break; } // limita la cantidad de opciones que se mostrara
            }
        }
        oss << endl;
        return oss.str();
    }

    string mostrarClaves() const {
		ostringstream oss;
        oss << "privada: (d=" << _d << ", n=" << _n << ")\n";
        oss << "publica: (e=" << _e << ", n=" << _n << ")\n";
        oss << "p = " << _p << ", q = " << _q << ", n = " << _n 
            << "euler = " << _euler << ", e = " << _e << ", d = " << _d << endl;
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

    long long get_P() const { return _p; }
    long long get_Q() const { return _q; }
    long long get_Euler() const { return _euler; }
    long long get_E() const { return _e; }
    long long get_D() const { return _d; }
    long long get_N() const { return _n; }

    void setEuler(long long euler) { _euler = euler; }
	void setE(long long e) { _e = e; }
	void setD(long long d) { _d = d; }
	void setN(long long n) { _n = n; }

};

