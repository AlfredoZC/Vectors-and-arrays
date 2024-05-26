#include <iostream>
#include <vector>
using namespace std;

int main (){

    vector<int> vec = {3,5,6,7};
    int arr[4][4]= {
        
        {1,2,3,4},
        {2,3,6,5},
        {6,8,3,6},
        {4,6,8,9}
    };
    
    int result = 0;
    int size = sizeof arr / sizeof arr[0];
    
    cout<<size;
    
     for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            int numb1 = arr [i][j];
            int numb2 = vec [j];
            result += numb1 * numb2 ;

        }
     }
     cout<<"the scalar product between the vector with a size of 4 and the matriz 4x4: ";
     cout<<result;

    




    return 0;
}