#include <iostream>
using namespace std;

float valor_final(float valor_principal, float taxa_de_juros, int meses) {
    return valor_principal*(1+taxa_de_juros*meses);
}

int main(){
    
    float valor_principal1, taxa_de_juros1;
    int meses1;
    
    cout<<"Digite o valor principal: ";
    cin>>valor_principal1;
    
    cout<<"Digite a taxa de juros: ";
    cin>>taxa_de_juros1;
    
    cout<<"Digite o tempo em meses: ";
    cin>>meses1;
    
    
    cout<<"VF = "<<valor_final(valor_principal1, taxa_de_juros1, meses1);
    
    return 0;
}