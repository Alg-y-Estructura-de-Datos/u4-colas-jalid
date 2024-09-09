#include <iostream>
#include "Cola.h"

using namespace std;

struct Documento {
        string nombre;
        int paginas;

        Documento(const string& nombre = "", int paginas = 0) : nombre(nombre), paginas(paginas) {}
        
        void mostrar() const {
        cout << "Documento: " << nombre << ", Paginas: " << paginas << endl;
    }
};

void imprimirDocumento(Cola<Documento> &colaImpresion){
        Documento doc = colaImpresion.desencolar();
        cout << "Imprimiendo archivo: " << doc.nombre << endl;
        
        
}

void agregarDocumento(Cola<Documento> &colaImpresion){
        Documento documento;

        cout << "Ingrese el nombre del documento y las páginas" << endl;
        cin >> documento.nombre;
        cin >> documento.paginas;

        colaImpresion.encolar(documento);

}

void mostrarCola(Cola<Documento> &colaImpresion){
        Cola<Documento> colaAux;
        
        cout << "Estado actual de la cola de impresión: " << endl;

        while (!colaImpresion.esVacia()){
                Documento doc =
        }
        
}

int main(){
        Cola<Documento> colaImpresion;
        int opcion;

        do {
                cout << "\n--- Menu de Opciones ---\n";
                cout << "1. Mostrar cola de impresion\n";
                cout << "2. Agregar nuevo documento a la cola\n";
                cout << "3. Imprimir siguiente documento\n";
                cout << "4. Salir\n";
                cout << "Ingrese una opcion: ";
                cin >> opcion;  

                switch (opcion) {
                        case 1:
                            mostrarCola(colaImpresion);
                        break;
                        case 2:
                            agregarDocumento(colaImpresion);
                        break;
                        case 3:
                            imprimirDocumento(colaImpresion);
                        break;
                        case 4:
                            cout << "Saliendo del programa..." << endl;
                        break;
                        default:
                            cout << "Opción invalida. Intentelo de nuevo." << endl;
                        break;
                }
        } while (opcion != 4);





        

        return 0;
}