#include <iostream>
#include <vector>

using namespace std;

int revisar(vector<int>& alturas);

int main() {
    int n;
    cout << "Ingrese el numero de alturas: ";
    cin >> n;
    
    vector<int> altura(n);
    cout << "Ingrese las alturas:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> altura[i];
    }
    
    cout << "El numero de indices fuera de lugar es: " << revisar(altura) << endl;
    
    return 0;
}
int revisar(vector<int>& alturas) {
    vector<int> esperado = alturas;
    int n = esperado.size();

    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (esperado[j] > esperado[j+1]) {
                int temp = esperado[j];
                esperado[j] = esperado[j+1];
                esperado[j+1] = temp;
            }
        }
    }

    int conteo_desajuste = 0;
    for (int i = 0; i < n; ++i) {
        if (alturas[i] != esperado[i]) {
            conteo_desajuste++;
        }
    }
    
    return conteo_desajuste;
}

