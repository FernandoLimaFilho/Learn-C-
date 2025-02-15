#include <iostream>
using namespace std;

int main() {
    float tempCelsius[4] = {10, 20, 30, 40};
    float tempKelvin[4];
    for (int i=0; i < 4; i++){
        tempKelvin[i] = tempCelsius[i] + 273;
    }
    
    for (int i=0; i<4; i++){
        cout<<tempKelvin[i]<<endl;
    }
    
    return 0;
}