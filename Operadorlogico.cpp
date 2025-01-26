#include <iostream>
using namespace std;

int main()
{
    int idade;
    
    cout<<"Digite sua idade: ";
    cin>>idade;
    
    bool obrigado_a_votar = (idade>=18 && idade<=70);
    
    if (obrigado_a_votar == 1) {
        cout<<"Você é obrigado a votar!";
    }
    
    else if (obrigado_a_votar == 0 && idade<16) {
        cout<<"Você não pode votar!";
    }
    
    else if (obrigado_a_votar == 0 && idade>70) {
        cout<<"O voto é opcional.";
    }
    else if (obrigado_a_votar == 0 && 16<=idade<=17) {
        cout<<"O voto é opcional.";
    }
    
    return 0;
}