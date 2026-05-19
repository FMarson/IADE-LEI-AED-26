#include "Fila.hpp"

#include <iostream>
using namespace std;

void Fila::enqueue(int valor) {
    adicionarFim(valor);
}

int Fila::dequeue() {
    int valor;
    valor = getValor(0);
    removerPosicao(0);
    return valor;
}

int Fila::front() {
    return getValor(0);
}

int Fila::back() {
    return getValor(getTamanho()-1);
}

bool Fila::estaVazia() {
    if (getTamanho() == 0)
        return true;
    return false;
}

int Fila::tamanho() {
    return getTamanho();
}

void Fila::imprimir() {
    Lista::imprimir();
}
