#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float massa;
    float altura;
    
    cout<<"Digite a massa: ";
    cin>>massa;
    cout<<"Digite a altura: ";
    cin>>altura;
    
    float imc = massa/(pow(altura,2));
    
    cout<<"-------------------------"<<endl;
    cout<<"IMC = "<<imc<<endl;
    
    return 0;
}