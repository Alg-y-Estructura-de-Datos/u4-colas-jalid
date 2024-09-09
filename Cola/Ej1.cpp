#include <iostream>
#include "Cola.h"

using namespace std;

bool verificarIgualdad(Cola<char> &cola1, Cola<char> &cola2){

        while(!cola1.esVacia() && !cola2.esVacia()) {
                if(cola1.peek() != cola2.peek()){
                        return false;
                }
                cola1.desencolar();
                cola2.desencolar();
        }
        return cola1.esVacia() && cola2.esVacia();
}

int main(){

        Cola<char> cola1;
        Cola<char> cola2;

        cola1.encolar('n');
        cola2.encolar('n');

        bool igualdad = verificarIgualdad(cola1, cola2);

        if(igualdad){
                cout << "Las colas son iguales " << endl;
        } else {
                cout << "Las colas no son iguales " << endl;
        }

        return 0;

}