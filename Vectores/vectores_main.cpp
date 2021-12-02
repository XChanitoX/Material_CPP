#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Creando el vector de enteros
    vector<int> vectorEnteros;

    // Agregando los elementos al final del vector
    vectorEnteros.push_back(1);
    vectorEnteros.push_back(2);
    vectorEnteros.push_back(3);

    // Eliminando el último elemento del vector
    vectorEnteros.pop_back();

    for(auto e : vectorEnteros){
        cout << e << " ";
    }

    return 0;
}