#include <iostream>
#include "Cola.h"

using namespace std;

void suprimirNumero(Cola<int> &cola, int n){
        Cola<int> colaAux;

        while(!cola.esVacia()){
                int valor = cola.desencolar();
                if(valor < n){
                        colaAux.encolar(valor);
                }
        }

        while(!colaAux.esVacia()){
                int valor = colaAux.desencolar();
                cola.encolar(valor);
                cout << valor << "->";
        }
}

int main(){

        Cola<int> cola1;
        int n = 4;

        cola1.encolar(1);
        cola1.encolar(2);
        cola1.encolar(3);
        cola1.encolar(4);
        cola1.encolar(5);
        cola1.encolar(3);

        suprimirNumero(cola1, n);

        return 0;


}