#include <iostream>
#include <vector>

using namespace std;

int encontrar_min(const vector<int>& salario);
int encontrar_max(const vector<int>& salario);
double salario_promedio(vector<int>& salario);

int main() {
    int n;
    cout << "Ingrese el numero de salarios: ";
    cin >> n;
    vector<int> salario(n);
    cout << "Ingrese los salarios:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> salario[i];
    }
    cout << "Salario promedio: " << salario_promedio(salario) << endl;
    
    return 0;
}

int encontrar_min(const vector<int>& salario) {
    int min_salario = salario[0];
    for (int i = 1; i < salario.size(); ++i) {
        if (salario[i] < min_salario) {
            min_salario = salario[i];
        }
    }
    return min_salario;
}

int encontrar_max(const vector<int>& salario) {
    int max_salario = salario[0];
    for (int i = 1; i < salario.size(); ++i) {
        if (salario[i] > max_salario) {
            max_salario = salario[i];
        }
    }
    return max_salario;
}

double salario_promedio(vector<int>& salario) {
    int min_salario = encontrar_min(salario);
    int max_salario = encontrar_max(salario);
    
    double suma = 0;
    int cantidad = 0;
    for (int s : salario) {
        if (s != min_salario && s != max_salario) {
            suma += s;
            cantidad++;
        }
    }
    
    return suma / cantidad;
}
