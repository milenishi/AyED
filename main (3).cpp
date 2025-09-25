#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;


struct nodo {
    
 int dato;
 nodo *sgte = NULL;
 
};

//prototipo de funcion 
void agregarPila (nodo *&,int);
void sacarPila (nodo *&, int &);


int main()
{
    
    nodo *pila  = NULL;
    int dato;
    char rta;
    
    do{ 
        cout<<" ingrese un nro "<< endl;
        cin >>dato; 
        agregarPila (pila, dato);
        
        
        cout<<"desea agregar otro dato? (s/n)"<<endl;
        cin>> rta;
        
    } while ((rta== 'S') || (rta=='s'));
    cout<<"sacando todos los elementos de pila"<<endl;
    
    while(pila != NULL){//mientras no sea el final de la pila puedo seguir sacando elementos
        sacarPila (pila, dato );
        if (pila != NULL){
            
            cout<<dato << " , ";
        } else {
            
            cout<< dato<< ". "<< endl;
        
        }
        
        
    }
    
    
    
    return 0;
}


void agregarPila (nodo *&pila, int n ){
    
    nodo *Nuevo_nodo = new nodo () ;
    Nuevo_nodo-> dato =n;
    Nuevo_nodo-> sgte = pila;
    pila = Nuevo_nodo;
    
    
    cout<<"el elemento "<< n<<" ha sido agregado a pila correctamente"<< endl;
}
void sacarPila (nodo *&pila, int &n){
    
    nodo *aux =pila;
    n = aux -> dato;
    pila = aux -> sgte;
    delete aux;
    
    
}




