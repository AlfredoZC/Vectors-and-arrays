#include <iostream>
#include <vector>
using namespace std; 

int main (){

    vector<int> temperture;
    int number;

    cout<<"ingrese las temperaturas observadas durante estos dias: "<<endl;
    
    while(true){
        cout<<"ingrese 0 para salir: ";
        cin>>number;
            if(number == 0 ){

                break;
            }
            else if (number < 0){

                cout<<"Ingreso datos negativos // Ingrese numeros positivos"<<endl;
            }

            else{ 
   
            temperture.push_back(number);
                
            }
        
    }

    for(int i = 0; i < temperture.size(); ++i){
        cout<<temperture[i]<<" ";
    }
    cout<<endl;
    float sum = 0;


    for(int i = 0; i < temperture.size(); ++i){
        sum += temperture[i];
    }

    float result = sum / temperture.size();
    cout<<"la media de temperatura es: "<<result<<endl;
    vector<int> new_vector;

    for( int i = 0; i < temperture.size(); ++i){
            if( temperture[i] > result ){
                new_vector.push_back(i);
            }
    }

    cout<<"dias que sobrepasaron el limite de temperatura son:"<<endl;

    for(int i = 0; i < new_vector.size(); ++i){
        cout<<new_vector[i]<<" ";
    }

    return 0;

}