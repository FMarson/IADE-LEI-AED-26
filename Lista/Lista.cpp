#include "Lista.hpp"
#include <iostream>
using namespace std;

Lista::Lista()
{
    inicio = nullptr;
    fim = nullptr;
    tamanho = 0;
}

Lista::~Lista() {
    limpar();
}

void Lista::limpar() {
    if (tamanho > 0) {
        nodo = inicio;
        do {
            tmp = nodo;
            nodo = nodo->prox;
            delete tmp;
        }while (nodo != nullptr);
        tamanho = 0;
        inicio = fim = nullptr;
    }
}

Nodo *Lista::alocarNodo(int valor) {
    tmp = new Nodo;
    tmp->dado = valor;
    tmp->ant = nullptr;
    tmp->prox = nullptr;
    return tmp;
}

void Lista::adicionar(int valor, int posicao) {
    if (tamanho == 0 && posicao == 0) {
        inicio = alocarNodo(valor);
        fim = inicio;
        tamanho++;
    }
    else if (posicao >= 0 && posicao <= tamanho)  {
        //implementar se a posição do elemento for mais próxima do inicio ou se for mais proxima do fim.
        //A partir do inicio
        novo = alocarNodo(valor);
        if (posicao == 0) { // primeiro nodo ou inicio
            novo -> prox = inicio;
            inicio->ant = novo;
            inicio = novo;
        }
        else if (posicao == tamanho) { // ultimo nodo ou fim
            fim->prox = novo;
            novo->ant = fim;
            fim = novo;
        }
        else {
            nodo = getNodo(posicao);
            nodo->ant->prox = novo;
            novo->prox = nodo;
            novo->ant = nodo->ant;
            nodo->ant = novo;
        }

        //a partir do final

        //
        tamanho++;
    }
}
void Lista::adicionarInicio(int valor) {
    adicionar(valor, 0);
}
void Lista::adicionarFim(int valor) {
    if (tamanho == 0)
        adicionar(valor, 0);
    else
        adicionar(valor, tamanho);
}

void Lista::imprimir() {
    if (tamanho == 0)
        cout << "\nLista vazia." << endl;
    else {
        tmp = inicio;
        cout << "\nLista : ";
        do {
            cout << tmp->dado << " ";
            tmp = tmp->prox;
        }while (tmp != nullptr);
    }
}

int Lista::getTamanho() {
    return tamanho;
}

int Lista::getValor(int posicao) {
    return 0; //implementar
}

Nodo* Lista::getNodo(int posicao) {
    nodo = nullptr;
    if (posicao >= 0 && posicao < tamanho) {
        tmp = inicio;
        for (int i = 0; i <= posicao; i++)
            tmp = tmp->prox;
        nodo = tmp->ant;
    }
    return nodo;
}

Nodo* Lista::procurarValor(int valor) {
    return nullptr; //implementar
}
void Lista::removerValor(int valor) {
    //implementar
}
void Lista::removerPosicao(int posicao) {
    //implementar
}