#include <iostream>
#include "Lista.hpp"
using namespace std;

int main()
{
    Lista lista;

    lista.adicionarInicio(10);
    cout << lista.getTamanho() << endl;
    lista.adicionarFim(20);
    lista.adicionar(5, 0);
    lista.imprimir();
    lista.adicionar(30, 3);
    lista.imprimir();
    lista.adicionar(6, 1);
    lista.imprimir();
    lista.adicionar(15, 3);
    lista.imprimir();
    lista.limpar();
    lista.imprimir();
    return 0;
}