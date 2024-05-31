#include <iostream>
#include <vector>
using namespace std;

void printarr(const vector<int>& arr);
void matrix_inversa(const vector<int>& arr);
void matrix_ascending(vector<int>& arr);

int main() {
    int numbers;
    cout << "Indique la cantidad de numeros que va a ingresar: ";
    cin >> numbers;
    
    if (numbers <= 0) {
        cout << "La cantidad de números debe ser positiva." << endl;
        return 1;
    }

    vector<int> arr(numbers);

    for (int i = 0; i < numbers; ++i) {
        cout << "Ingrese los valores: ";
        cin >> arr[i];
    }
    
    printarr(arr);
    matrix_inversa(arr);
    matrix_ascending(arr);

    return 0;
}

void printarr(const vector<int>& arr) {
    cout << "Tu matriz es: ";
    for (int j = 0; j < arr.size(); ++j) {
        cout << " " << arr[j];
    }
    cout << endl;
}

void matrix_inversa(const vector<int>& arr) {
    cout << "Tu matriz inversa es: ";
    for (int k = arr.size() - 1; k >= 0; --k) {
        cout << " " << arr[k];
    }
    cout << endl;
}

void matrix_ascending(vector<int>& arr) {
    cout << "La matriz en orden ascendente es: ";
    for (int t = 0; t < arr.size(); ++t) {
        for (int a = t + 1; a < arr.size(); ++a) {
            if (arr[t] > arr[a]) {
                swap(arr[t], arr[a]);
            }
        }
    }
    for (int x = 0; x < arr.size(); ++x) {
        cout << " " << arr[x];
    }
    cout << endl;
}

