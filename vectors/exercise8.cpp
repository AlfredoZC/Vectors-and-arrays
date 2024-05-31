#include <iostream>
#include <vector>
#include <string>

using namespace std;

void agregar_tarea(vector<vector<string>>& tareas, int dia, const string& nombre_tarea);
void mostrar_dia(const vector<vector<string>>& tareas, int dia);
void siguiente_mes(vector<vector<string>>& tareas, int& cantidad_dias_mes_actual);

int main() {
    int Q;
    cin >> Q;

    int cantidad_dias_mes_actual = 31;
    vector<vector<string>> tareas(cantidad_dias_mes_actual + 1);

    while (Q--) {
        string operacion;
        cin >> operacion;

        if (operacion == "ADD") {
            int dia;
            string nombre_tarea;
            cin >> dia >> nombre_tarea;
            agregar_tarea(tareas, dia, nombre_tarea);
        } else if (operacion == "DUMP") {
            int dia;
            cin >> dia;
            mostrar_dia(tareas, dia);
        } else if (operacion == "NEXT") {
            siguiente_mes(tareas, cantidad_dias_mes_actual);
        }
    }

    return 0;
}
void agregar_tarea(vector<vector<string>>& tareas, int dia, const string& nombre_tarea) {
    tareas[dia].push_back(nombre_tarea);
}

void mostrar_dia(const vector<vector<string>>& tareas, int dia) {
    cout << tareas[dia].size() << " ";
    for (const string& tarea : tareas[dia]) {
        cout << tarea << " ";
    }
    cout << endl;
}

void siguiente_mes(vector<vector<string>>& tareas, int& cantidad_dias_mes_actual) {
    vector<vector<string>> nuevas_tareas(cantidad_dias_mes_actual + 1);

    for (int dia = 1; dia <= cantidad_dias_mes_actual; ++dia) {
        for (const string& tarea : tareas[dia]) {
            if (dia <= cantidad_dias_mes_actual) {
                nuevas_tareas[dia].push_back(tarea);
            } else {
                nuevas_tareas[cantidad_dias_mes_actual].push_back(tarea);
            }
        }
    }

    tareas = nuevas_tareas;
    
    if (cantidad_dias_mes_actual == 31) {
        cantidad_dias_mes_actual = 28;
    } else {
        cantidad_dias_mes_actual = 31;
    }
}