#include <iostream>
#include <vector>

using namespace std;

void encontrar_numero(const vector<vector<int>>& matrix, int user);

int main() {
    vector<vector<int>> matrix = {
        {12, 4, 5, 6},
        {23, 6, 8, 12, 3, 1},
        {4, 5, 7, 9, 3, 2, 1},
        {2, 3, 5, 14},
        {10, 13}
    };

    bool activador = true;

    while (activador) {

        int valor_usuario;
        cout << "Ingrese el número a buscar: ";
        cin >> valor_usuario;
        cout << endl;
        encontrar_numero(matrix, valor_usuario);
        int key;
        cout << "Para salir, ingrese -1, si no ingrese cualquier otro valor" << endl;
        cin >> key;
        if (key == -1) {
            activador = false;
        }
        else{
            continue;
        }
    }

    return 0;
}

void encontrar_numero(const vector<vector<int>>& matrix, int user){

        bool encontrado = false;

        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[i].size(); ++j) {
                if (matrix[i][j] == user) {
                    cout << "Su número se encuentra en la fila " << i << " y la columna " << j << endl;
                    encontrado = true;
                    break;
                }
            }

            if (encontrado) {
                break;
            }
        }

        if (!encontrado) {
            cout << "No se encontró el número" << endl;
        }

}
