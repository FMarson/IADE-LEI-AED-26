#ifndef PILHA_HPP
#define PILHA_HPP
#include "Lista.hpp"


class Pilha : private Lista {
private:
    Nodo *inicio, *fim, *tmp;

public:
    Pilha() : Lista() {}
    void push(int valor);
    int pop();
    int peek();
    void imprimir();
    bool estaVazia();
    int tamanho();
};
#endif //PILHA_H
