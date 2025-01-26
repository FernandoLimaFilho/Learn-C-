#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    
    cout<<"Digite o 1 número: ";
    cin>>num1;
    cout<<"Digite o 2 número: ";
    cin>>num2;
    
    int multiplicacao = num1*num2;
    float divisao = (float)num1/(float)num2;
    int modulo = num1%num2;
    
    cout<<"-------------------------"<<endl;
    cout<<num1<<"*"<<num2<<" = "<<multiplicacao<<endl;
    cout<<num1<<"/"<<num2<<" = "<<divisao<<endl;
    cout<<num1<<"%"<<num2<<" = "<<modulo<<endl;
    
    return 0;
}