#include <iostream>

using namespace std;

int number, i;

struct Nodo{
    int dato;
    Nodo *sig;
}*inicio;

struct Nodo_1{
    int dato1;
    Nodo_1 *sig1;
}*inicio1;


class PilaPar{
    public:
    Nodo* crearNodo(int valor){
        Nodo *n = new Nodo;
        n->dato = valor;
        n->sig = nullptr;
        return n;
    }

    void push(int valor){
        Nodo *n = crearNodo(valor);
        n->sig = inicio;
        inicio=n;
    }
    int mostrarPila(){
        int i = 0;
        Nodo *temp = inicio;
        if(!inicio)
            cout<<"Pila vacia"<<endl;
        else
            while(temp){
                i++;
                temp = temp->sig;
            }
            //cout<<i<<endl;
        return i;
    }
    PilaPar(){
        inicio = nullptr;
    }
};

class PilaImpar{
    public:
    Nodo_1* crearNodo(int valor){
        Nodo_1 *n = new Nodo_1;
        n->dato1 = valor;
        n->sig1 = nullptr;
        return n;
    }

    void push(int valor){
        Nodo_1 *n = crearNodo(valor);
        n->sig1 = inicio1;
        inicio1=n;
    }
    int mostrarPila(){
        int i = 0;
        Nodo_1 *temp = inicio1;
        if(!inicio)
            cout<<"Pila vacia"<<endl;
        else
            while(temp){
                //cout<<temp->dato1<<endl;
                i++;
                temp = temp->sig1;
            }
            //cout<<i<<endl;
        return i;
    }
    PilaImpar(){
        inicio1 = nullptr;
    }
};

int Comparator(int n){
    if(n%2==0){
        cout<<"El numero es par"<<endl;
        return 0;
    }
    if(n%2!=0){
        cout<<"El numero es impar"<<endl;
        return 1;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    cout<<"Ingrese la cantidad de numeros a ingresar: ";
    cin>>i;
    PilaPar pilapar;
    PilaImpar pilaimpar;
    for (int j = 0; j<i; j++){
        cout<<"Ingrese un numero: ";
        cin>>number;
        if(Comparator(number) == 0){
            pilapar.push(number);
        }
        else{
            pilaimpar.push(number);
        }


    }
    if(pilapar.mostrarPila() < pilaimpar.mostrarPila()){
        cout<<"La pila impar es mayor"<<endl;
    }
    else if(pilapar.mostrarPila() > pilaimpar.mostrarPila()){
        cout<<"La pila par es mayor a la impar"<<endl;
    }
    else{
        cout<<"Ambas pilas son de igual tamaño"<<endl;
    }

    return 0;
}
