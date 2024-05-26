#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<int> ParseLine(string line);

void ReadBoardFile(string path);

void PrintBoard(const vector<vector<int>> board);

int main() {
  // TODO: Guarde la salida de la funcion readBoardFile en la variable board
  vector<vector<int>> board = {};

  // TODO: quite el comentario de la funcion para mostrar su board!
  // PrintBoard(board);
}

vector<int> ParseLine(string line) {
  istringstream sline(line);
  int n;
  char c;
  vector<int> row;
  while (sline >> n >> c && c == ',') {
    row.push_back(n);
  }
  return row;
}

// TODO: Cambie el tipo de retorno de la funcion readBoardFile.
void ReadBoardFile(string path) {
  // TODO: Declare una variable board vacia con el tipo de
  // type vector<vector<int>>.
  // TODO: En lugar de usar "cout" code utilice una llamada a ParseLine para cada linea
  // y coloque los resultados de parseLine a la cole del vector board (push_back)
  // TODO: Devuelva la variable board (Asegurese de cambiar el tipo de variable de retorno)
}

// TODO: Realice la funcion que muestre el vector
void PrintBoard(const vector<vector<int>> board) {
}