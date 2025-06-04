#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// se guarda el texto desencriptado
void guardarTexto(const string& nombre, const string& texto) {
    ofstream archivo(nombre);
    archivo << texto;
    archivo.close();
}
// se guarda el valor numerico encriptado
void guardarNumeros(const string& nombre, const vector<long long>& datos) {
    ofstream archivo(nombre);
    for (long long n : datos) archivo << n << " ";    
    archivo.close();
}
// se leen los valores numericos para desencriptar
vector<long long> leerNumeros(const string& nombre) {
    vector<long long> datos;
    ifstream archivo(nombre);
    string linea;
    if (getline(archivo, linea)) {
        size_t pos = 0;
        while ((pos = linea.find(' ')) != string::npos) {
            string token = linea.substr(0, pos);
            datos.push_back(stoi(token));
            linea.erase(0, pos + 1);
        }
    }
    return datos;
}

// se lee el texto original desde archivo
string leerTexto(const string& nombre) {
    ifstream archivo(nombre);
    string contenido, linea;
    while (getline(archivo, linea)) {
        contenido += linea + "\n";
    }
    return contenido;
}
