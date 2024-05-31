#include <iostream>
#include <vector>
using namespace std; 

void ingresarTemperaturas(vector<int>& temperaturas);
void imprimirTemperaturas(const vector<int>& temperaturas);
float calcularMedia(const vector<int>& temperaturas);
vector<int> obtenerDiasSobreMedia(const vector<int>& temperaturas, float media);

int main() {
    vector<int> temperaturas;
    ingresarTemperaturas(temperaturas);
    imprimirTemperaturas(temperaturas);
    
    float media = calcularMedia(temperaturas);
    cout << "La media de temperatura es: " << media << endl;
    
    vector<int> diasSobreMedia = obtenerDiasSobreMedia(temperaturas, media);
    cout << "Los días que sobrepasaron el límite de temperatura son: ";
    for (int dia : diasSobreMedia) {
        cout << dia << " ";
    }
    cout << endl;

    return 0;
}

void ingresarTemperaturas(vector<int>& temperaturas) {
    int numero;
    cout << "Ingrese las temperaturas observadas durante estos días: " << endl;
    while (true) {
        cout << "Ingrese 00 para salir: ";
        cin >> numero;
        if (numero == 00) {
            break;
        } else if (numero < 0) {
            cout << "Ingreso datos negativos // Ingrese números positivos" << endl;
        } else {
            temperaturas.push_back(numero);
        }
    }
}

void imprimirTemperaturas(const vector<int>& temperaturas) {
    cout << "Temperaturas ingresadas: ";
    for (int temp : temperaturas) {
        cout << temp << " ";
    }
    cout << endl;
}

float calcularMedia(const vector<int>& temperaturas) {
    float suma = 0;
    for (int temp : temperaturas) {
        suma += temp;
    }
    return suma / temperaturas.size();
}

vector<int> obtenerDiasSobreMedia(const vector<int>& temperaturas, float media) {
    vector<int> dias;
    for (int i = 0; i < temperaturas.size(); ++i) {
        if (temperaturas[i] > media) {
            dias.push_back(i);
        }
    }
    return dias;
}
