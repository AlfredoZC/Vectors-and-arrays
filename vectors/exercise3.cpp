#include <iostream>
#include <vector>
using namespace std;

int main (){

    int numbers;
    cout<<"Indique la cantidad de numeros que va a ingresar: ";
    cin>>numbers;
    int arr[numbers - 1];
    int size = sizeof(arr)/sizeof(arr[0]);
    int saver = 0; //we are gonna use this variable in the ascending matriz

    for(int i = 0; i <= size; ++i){
        cout<<"Ingrese los valores: "; 
        cin>>arr[i];
    }
    
    cout<<"Tu matriz es: ";
    for(int j = 0; j<= size ; ++j){
        cout<<" "<<arr[j];
    }

    cout<<"Tu matriz inversa es: "; 
    for ( int k = size - 1; k >= 0 ; --k){
        cout<< " "<<arr[k];
    }

    cout<<"La matriz en orde ascendente es: ";
    for(int t = 0; t < size ; ++t){
        for(int a = 0 ; a < size; ++a){
            if(arr[t] < arr[a]){

                saver = arr[t];
                arr[t]= arr[a];
                arr[a]= saver;

            }
        }
    }
    for(int x = 0; x < size; ++x){
        cout<< " "<<arr[x];
    }



    return 0;
}