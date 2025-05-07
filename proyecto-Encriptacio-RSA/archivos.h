#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <tuple>

using namespace std;

void guardarTexto(const string& nombre, const string& texto) {
    ofstream archivo(nombre);
    archivo << texto;
    archivo.close();
}

void guardarNumeros(const string& nombre, const vector<int>& datos) {
    ofstream archivo(nombre);
    for (int n : datos) archivo << n << "|";    
    archivo.close();
}

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