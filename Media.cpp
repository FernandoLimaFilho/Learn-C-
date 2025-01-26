#include <iostream>
using namespace std;

int main()
{
    float nota1, nota2, nota3, nota4;
    
    cout<<"Digite a 1 nota: ";
    cin>>nota1;
    cout<<"Digite a 2 nota: ";
    cin>>nota2;
    cout<<"Digite a 3 nota: ";
    cin>>nota3;
    cout<<"Digite a 4 nota: ";
    cin>>nota4;
    
    float media = (nota1+nota2+nota3+nota4)/4;
    
    cout<<"-------------------------"<<endl;
    cout<<"A média do aluno é "<<media<<endl;
    
    return 0;
}