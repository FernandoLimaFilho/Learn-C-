#include <iostream>
using namespace std;

int main()
{
    //Declaração de variáveis.
    int num1, num2;
    
    //Pedir dados ao usuário.
    cout<<"Digite um número inteiro: ";
    cin>>num1;
    cout<<"Digite outro número inteiro: ";
    cin>>num2;
    
    //Verificar se os dois números são iguais.
    bool verdadeiro_ou_falso = num1 <= num2;
    
    //Mostrar na tela verdadeiro (1) ou falso (0).
    cout<<"------------------"<<endl;
    cout<<verdadeiro_ou_falso;

    return 0;
}