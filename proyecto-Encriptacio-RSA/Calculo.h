#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <tuple>

using namespace std;

//funcion del minimo comun divisor
template <typename T>
T mcd(T a, T b) {
    return b == 0 ? a : mcd(b, a % b);
}

//funcion para calcular el valor del mensaje con modulo
template <typename T>
T hallarMod(T base, T exp, T mod) {
    T result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

//funcion para calcular el inverso modular
template <typename T>
T modInverso(T e, T euler) {
    T t = 0, newt = 1;
    T r = euler, newr = e;

    while (newr != 0) {
        T quotient = r / newr;
        T temp = newt;
        newt = t - quotient * newt;
        t = temp;

        temp = newr;
        newr = r - quotient * newr;
        r = temp;
    }

    if (r > 1) return -1;
    if (t < 0) t += euler;
    return t;
}

//funcion para verificar si un numero es primo
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0) return false;
    return true;
}
