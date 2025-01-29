#include <iostream>
using namespace std;

int main()
{
    int idade;
    
    cout<<"Digite sua idade: ";
    cin>>idade;
    
    if (idade>=0 && idade<=12) {
        cout<<"Criança.";
    }
    
    else if (idade>=13 && idade<=17) {
        cout<<"Adolescente.";
    }
    
    else if (idade>=18 && idade<=64) {
        cout<<"Adulto.";
    }
    
    else if (idade>=65) {
        cout<<"Idoso.";
    }
    
    return 0;
}