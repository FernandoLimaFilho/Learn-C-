#include <iostream>
using namespace std;

float tempo(float distancia, float velocidade) {
    return distancia/velocidade;
}

int main(){
    
    float distancia1, velocidade1;
    
    cout<<"Digite a distância (km): ";
    cin>>distancia1;
    
    cout<<"Digite a velocidade (km/h): ";
    cin>>velocidade1;
    
    cout<<"Tempo: "<<tempo(distancia1, velocidade1)<<"h";
    
    return 0;
}