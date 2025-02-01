/* Implemente um programa que simule um menu com opções para calcular a 
soma, subtração e multiplicação de dois números. 
Continue mostrando o menu até que o usuário escolha sair. 
Usando o Do-While.*/
#include <iostream>
using namespace std;

int main() {
    string menu;
    string continuar;
    float num1;
    float num2;
    float resultado;
        do {
            cout<<"Escolha entre 'soma', 'subtração' e 'multiplicação': ";
            cin>>menu;
            
            while (menu != "soma" && menu != "subtração" && menu != "multiplicação") {
                cout<<"Escreva: soma ou subtração ou multiplicação. "; 
                cin>>menu;
            }
            
            cout<<"Digite o primeiro número: ";
            cin>>num1;
            cin.ignore(1000, '\n');
            
            cout<<"Digite o segundo número: ";
            cin>>num2;
            cin.ignore(1000, '\n');
            
            
            if (menu == "soma") {
                resultado = num1+num2;
            }
            
            else if (menu == "subtração") {
                resultado = num1-num2;
            }
            
            else if (menu == "multiplicação") {
                resultado = num1*num2;
            }
            
            cout<<"Resultado: "<<resultado<<endl;
            
            cout<<"Gostaria de continuar (sim ou não)? ";
            cin>>continuar;
            
            
        } while (continuar == "sim");
        
    cout<<"Programa encerrado.";    

    return 0;
}