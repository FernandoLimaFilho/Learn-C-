#include <iostream>
using namespace std;

int main(){
    const double k = 9e9; //constante eletrostática (N·m²/C²)
    double q; //carga q
    double r; //distância r
    
    //Entrada de dados:carga
    cout<<"Digite o valor da carga q (C): "<<endl;
    cin>>q;
    
    //Montagem da tabela
    cout << "\nDistância (m) | Campo Elétrico (N/C)\n";
    cout << "------------------------------------\n";
    
    //Amostragem dos dados na tabela
    for (r=1; r<=10; r++){
        double E = k*q/(r*r);
        cout << "    " << r << " m   |   " << E << " N/C\n";
    }
    
    return 0;
}