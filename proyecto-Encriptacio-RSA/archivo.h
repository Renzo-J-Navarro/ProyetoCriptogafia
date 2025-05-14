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
void guardarNumeros(const string& nombre, const vector<int>& datos) {
    ofstream archivo(nombre);
    for (int n : datos) archivo << n << "|";    
    archivo.close();
}

// se leen los valores numericos para encriptar o desencriptar
vector<int> leerNumeros(const string& nombre) {
    vector<int> datos;
    ifstream archivo(nombre);
    string linea;
    if (getline(archivo, linea)) {
        size_t pos = 0;
        while ((pos = linea.find('|')) != string::npos) {
            string token = linea.substr(0, pos);
            datos.push_back(stoi(token));
            linea.erase(0, pos + 1);
        }
    }
    return datos;
}