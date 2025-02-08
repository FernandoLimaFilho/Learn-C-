#include <iostream>
using namespace std;

int main() {
    // Vamos começar criando as variáveis de interesse p/ a resolução do problema
    //saldo: saldo bancário do usuário
    //saque: quanto o usuário quer sacar?
    //deposito: quanto o usuário quer depositar?
    //continuar: o usuário quer continuar usando o caixa eletrônico
    //menu: 1 - consultar saldo / 2 - fazer saque / 3 - fazer depósito
    float saldo, saque, deposito;
    string continuar, menu;
    //OBS: vamos considerar menu string somente para previnir erros por conta do usuário.
    
    //Devemos considerar o saldo inicial do usuário. 
    cout<<"Saldo inicial: ";
    cin>>saldo;
    //Caso o usuário digite um saldo negativo:
    while(saldo<0) {
        cout<<"Saldo inválido! Digite o seu saldo inicial: ";
        cin>>saldo;
    }
    
    //continuar = entrada (sim)
    continuar = "s";
    
    //laço do-while
    do{
        //Pergunta ao usuário qual opção do caixa ele(a) quer.
        cout<<"Digite uma das opções: \n1 - consultar saldo \n2 - fazer saque \n3 - fazer depósito\n";
        cin>>menu;
        //Caso o usuário digite algo diferente desses números:
        while (menu != "1" && menu != "2" && menu != "3") {
            cout<<"Digite (1 ou 2 ou 3): \n1 - consultar saldo \n2 - fazer saque \n3 - fazer depósito\n";
            cin>>menu;
        }
        
        //Consultar saldo:
        if (menu == "1"){
            cout<<"Seu saldo é: "<<saldo<<endl;
        }
        
        //Efetuar saque:
        else if (menu == "2"){
            cout<<"Quanto deseja sacar? ";
            cin>>saque;
            //Caso o usuário coloque um valor negativo:
            while (saque<0) {
                cout<<"Saque inválido. Digite o valor correto: ";
                cin>>saque;
            }
            //Se o saque for maior que o saldo:
            if (saque>saldo){
                cout<<"Saldo insuficiente."<<endl;
            }
            //caso contrário:
            else {
                cout<<"Saque efetuado."<<endl;
                saldo = saldo - saque;
            }
        }
        
        //Efetuar o depósito:
        else if (menu == "3") {
            cout<<"Quanto de depósito? ";
            cin>>deposito;
            cout<<"Depósito realizado."<<endl;
            saldo = saldo + deposito;
        }
        
        //Pergunta se deseja continuar a usar o caixa:
        cout<<"Deseja continuar(s/n)? ";
        cin>>continuar;
    }while(continuar=="s");
    
    //Mensagem de encerramento.
    cout<<"Obrigado por utilizar nossos serviços.";
    
    return 0;
}