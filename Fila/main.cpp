#include <iostream>
#include "Fila.hpp"

using namespace std;

int main()
{
    Fila fila;

    fila.enqueue(1);
    fila.enqueue(2);
    fila.enqueue(3);
    fila.enqueue(4);
    fila.enqueue(5);
    fila.imprimir();

    cout << fila.dequeue() << endl;
    fila.imprimir();
    cout << fila.dequeue() << endl;
    fila.imprimir();
    fila.enqueue(6);
    fila.imprimir();
    cout << "Primeiro elemento da fila: " << fila.front() << endl;
    fila.imprimir();
    cout << "Primeiro elemento da fila: " << fila.front() << endl;

    return 0;
}