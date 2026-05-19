#ifndef FILA_HPP
#define FILA_HPP
#include "Lista.hpp"


class Fila : private Lista {
public:
    Fila() : Lista() {}
    void enqueue(int valor);
    int dequeue();
    int front();
    int back();
    void imprimir();
    bool estaVazia();
    int tamanho();
};
#endif //FILA_H
