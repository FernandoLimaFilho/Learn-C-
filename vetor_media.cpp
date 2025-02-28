#include <iostream>
using namespace std;

int main(){
    int quantidade;
    float nota;
    float soma;
    
    cout<<"Quantidade de notas: ";
    cin>>quantidade;
    
    int notas[quantidade];
    
    for (int i=0; i<quantidade; i++){
        cout<<"Nota: ";
        cin>>nota;
        notas[i] = nota;
    }
    
    soma = 0;
    
    for (int i=0; i<quantidade; i++){
        soma = soma + notas[i];
    }
    
    float media = soma/quantidade;
    
    cout<<"Média: "<<media;
    
    return 0;
}