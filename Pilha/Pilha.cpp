#include "Pilha.hpp"

#include <iostream>
using namespace std;

void Pilha::push(int valor) {
   adicionarFim(valor);
}

int Pilha::pop() {
    int valor;
    valor = getValor(tamanho()-1);
    removerPosicao(tamanho()-1);
    return valor;
}

int Pilha::peek() {
    if (getTamanho() == 0) {
        cout << "Pilha vazia" << endl;
        return -1;
    }
    return getValor(tamanho()-1);
}

bool Pilha::estaVazia() {
    if (getTamanho() == 0)
        return true;
    return false;
}

int Pilha::tamanho() {
    return getTamanho();
}

void Pilha::imprimir() {
    if (getTamanho() == 0)
        cout << "\nVazia." << endl;
    else {
        tmp = getNodo(tamanho()-1);
        cout << "\nPilha : ";
        do {
            cout << tmp->dado << " ";
            tmp = tmp->ant;
        }while (tmp != nullptr);
    }
    cout << endl;
}
