#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void printboard(const vector<vector<int>>& b);

void show_file(const ifstream& file );

int main() {
    
    vector<vector<int>> board = {

        {'X',0 ,0 , 0,-1,-1,-1,-1},
        { 0, 0, 0, 0, 0,-1,-1,-1},
        {-1,-1, 0,-1,-1, 0,0 , 0},
        {-1, 0, 0, 0, 0, 0, 0,'G'}

    };

    printboard(board);

    if (!board.empty() && !board[0].empty()) {
        auto size = board[0].size();
        cout << "El tamaño de uno de los vectores internos es: " << size << endl;
    }

    cout<<"------------------------------------------------------"<<endl;

    cout<<"Ahora leeremos una archivo!!"<<endl;

    ifstream my_file; 
    my_file.open("exercise2/boards/1.board");
    if(my_file){
        cout<<"el archivo a sido creado corectamente!!"<<endl;
        string line;
        while(getline(my_file, line)){
            cout<<line<<endl;
        }
    }

    return 0;
}

void printboard(const vector<vector<int>>& b) {
    for (const auto& row : b) {
        for (int cell : row) {
            if (cell == 'X') {
                cout <<" "<< " X";
            } else if (cell == 'G') {
                cout <<" "<<" G";
            } else {
                cout << " " << cell;
            }
        }
        cout << endl;
    }
}



