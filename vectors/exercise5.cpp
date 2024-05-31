#include <iostream>
#include <vector>
using namespace std;

void producto_scalar(vector<int>vec, vector<vector<int>> vectores);
int main (){

    vector<int> vec = {3,5,6,7};
    vector<vector<int>>vectores = {
        
        {1,2,3,4},
        {2,3,6,5},
        {6,8,3,6},
        {4,6,8,9}
    };

    producto_scalar(vec, vectores);
    



    return 0;
}

void producto_scalar(vector<int>vec, vector<vector<int>> vectores){

    int result = 0;
    int size = vectores.size();
    
    cout<<size;
    
     for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            int numb1 =  vectores[i][j];
            int numb2 = vec [j];
            result += numb1 * numb2 ;

        }
     }
     cout<<"the scalar product between the vector with a size of 4 and the matriz 4x4: ";
     cout<<result;


}
