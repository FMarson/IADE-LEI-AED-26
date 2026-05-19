#include <iostream>
#include "Pilha.hpp"

using namespace std;

int main()
{
    Lista lista<double>;
    Pilha pilha;

    pilha.push(1);
    pilha.push(2);
    pilha.push(3);
    pilha.push(4);
    pilha.push(5);
    pilha.imprimir();

    // lista.adicionarFim(1);
    // lista.adicionarFim(2);
    // lista.adicionarFim(3);
    // lista.imprimir();


    cout << pilha.pop() << endl;
    pilha.imprimir();
    cout << pilha.pop() << endl;
    pilha.imprimir();
    pilha.push(6);
    pilha.imprimir();
    cout << "Primeiro elemento da pilha: " << pilha.peek() << endl;
    pilha.imprimir();
    cout << pilha.pop() << endl;
    cout << "Primeiro elemento da pilha: " << pilha.peek() << endl;

    return 0;
}