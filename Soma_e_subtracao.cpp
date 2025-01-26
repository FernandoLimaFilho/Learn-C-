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
    
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    
    cout<<"-------------------------"<<endl;
    cout<<num1<<" + "<<num2<<" = "<<soma<<endl;
    cout<<num1<<" - "<<num2<<" = "<<subtracao<<endl;
    
    return 0;
}