//Lei de Ohm
#include <iostream>
using namespace std;

int main(){
    double tensao, corrente, resistencia;
    string opcao;
    string continuar;
    continuar = "s";
    
    do{
        cout<<"Escolha uma opção: "<<endl;
        cout<<"1 - Tensão"<<endl;
        cout<<"2 - Corrente"<<endl;
        cout<<"3 - resistencia"<<endl;
        cin>>opcao;
        
        while (opcao != "1" && opcao != "2" && opcao != "3") {
            cout<<"Erro! Escolha uma das seguintes opções (1/2/3): "<<endl;
            cout<<"1 - Tensão"<<endl;
            cout<<"2 - Corrente"<<endl;
            cout<<"3 - resistencia"<<endl;
            cin>>opcao;
        }
        
        if (opcao == "1") {
            cout<<"Digite a corrente: "<<endl;
            cin>>corrente;
            cout<<"Digite a resistência: "<<endl;
            cin>>resistencia;
            tensao = corrente*resistencia;
            cout<<"Tensão = "<<tensao<<"V"<<endl;
        }
        
        else if (opcao == "2") {
            cout<<"Digite a tensão: "<<endl;
            cin>>tensao;
            cout<<"Digite a resistência: "<<endl;
            cin>>resistencia;
            while (resistencia == 0) {
                cout<<"Curto circuito! Digite um valor diferente de zero: "<<endl;
                cin>>resistencia;
            }
            corrente = tensao/resistencia;
            cout<<"Corrente = "<<corrente<<"A"<<endl;
        }
        
        else if (opcao == "3") {
            cout<<"Digite a tensão: "<<endl;
            cin>>tensao;
            cout<<"Digite a corrente: "<<endl;
            cin>>corrente;
            while (corrente == 0) {
                cout<<"Se i = 0A, não faz sentido calcular R. Digite um valor diferente de zero: "<<endl;
                cin>>corrente;
            }
            resistencia = tensao/corrente;
            cout<<"Resistência = "<<resistencia<<"Ω"<<endl;
        }
        
        cout<<"Deseja continuar (s/n)? "<<endl;
        cin>>continuar;
        while (continuar != "s" && continuar != "n") {
            cout<<"Digite s/n: ";
            cin>>continuar;
        }
        
    }while(continuar == "s");
    
    return 0;
    
}