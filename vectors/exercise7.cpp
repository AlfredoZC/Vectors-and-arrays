#include <iostream>
#include <vector>

using namespace std;

void worry(vector<bool>& cola, int i);
void quiet(vector<bool>& cola, int i);
void come(vector<bool>& cola, int k);
int worry_count(const vector<bool>& cola);

int main() {
    int Q;
    cin >> Q;

    vector<bool> cola;
    string operacion;
    int i;

    for (int j = 0; j < Q; ++j) {
        cin >> operacion;
        if (operacion == "COME") {
            cin >> i;
            come(cola, i);
        } else if (operacion == "WORRY") {
            cin >> i;
            worry(cola, i);
        } else if (operacion == "QUIET") {
            cin >> i;
            quiet(cola, i);
        } else if (operacion == "WORRY_COUNT") {
            cout << worry_count(cola) << endl;
        }
    }

    return 0;
}
void worry(vector<bool>& cola, int i) {
    cola[i] = true;
}

void quiet(vector<bool>& cola, int i) {
    cola[i] = false;
}

void come(vector<bool>& cola, int k) {
    if (k > 0) {
        cola.insert(cola.end(), k, false);
    } else if (k < 0) {
        cola.resize(cola.size() + k);
    }
}

int worry_count(const vector<bool>& cola) {
    int count = 0;
    for (bool estado : cola) {
        if (estado) {
            count++;
        }
    }
    return count;
}

