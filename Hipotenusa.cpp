#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float cateto1;
    float cateto2;
    
    cout<<"Digite o cateto 1: ";
    cin>>cateto1;
    cout<<"Digite o cateto 2: ";
    cin>>cateto2;
    
    float hipotenusa = sqrt(pow(cateto1,2) + pow(cateto2, 2));
    
    cout<<"-------------------------"<<endl;
    cout<<"A hipotenusa do triângulo é: "<<hipotenusa<<endl;
    
    return 0;
}