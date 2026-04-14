#include <iostream>
using namespace std;

struct Nodo{
  int dado;
  Nodo *prox;
};

int main()
{
    Nodo *inicio = NULL;
    Nodo *tmp, *nodo;
    
    nodo = new Nodo;
    nodo->dado = 10;
    nodo->prox = NULL;
    
    if(inicio==NULL){
        inicio = nodo;
    }
    
    cout << "Valor do nodo inicial: " << inicio->dado <<endl;
    
    //---------------------------
    // Inserção no final
    //---------------------------
    
    nodo = new Nodo;
    nodo->dado = 20;
    nodo->prox = NULL;
    
    
    if(inicio==NULL){
        cout << "Lista vazia!";
    }
    else{
        tmp = inicio;
        while(tmp->prox != NULL)
            tmp = tmp->prox;
        tmp->prox = nodo;
    }
    
    nodo = new Nodo;
    nodo->dado = 30;
    nodo->prox = NULL;
    
    
    if(inicio==NULL){
        cout << "Lista vazia!";
    }
    else{
        tmp = inicio;
        while(tmp->prox != NULL)
            tmp = tmp->prox;
        tmp->prox = nodo;
    }
    
    //---------------------------
    //Imprimir Lista
    //---------------------------
    tmp = inicio;
    if(inicio==NULL){
        cout << "Lista vazia!";
    }
    else{
        while(tmp != NULL){
            cout << tmp->dado << " ";
            tmp = tmp->prox;
        }
    }
                
    
    
    
    

    return 0;
}