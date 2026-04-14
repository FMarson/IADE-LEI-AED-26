struct Nodo {
	int dado;
	Nodo *prox, *ant;
};

class ListaSimples {
private:
	Nodo *inicio, *tmp, *nodo;
	int tamanho;

public:

	ListaSimples() {
		inicio = NULL;
		tamanho = 0;
	}

	~ListaSimples() {
		//-------
		//Desalocar a lista manualmente
	}

	void adicionarFim(int valor) {
		nodo = new Nodo;
		nodo->dado = valor;
		nodo->prox = NULL;

		if(inicio==NULL) {
			inicio = nodo;
		}
		else {
			tmp = inicio;
			while(tmp->prox != NULL)
				tmp = tmp->prox;
			tmp->prox = nodo;
		}
		tamanho++;
	}

	void adicionarInicio(int valor) {
		nodo = new Nodo;
		nodo->dado = valor;
		nodo->prox = NULL;

		if(inicio == NULL) {
			inicio = nodo;
		}
		else {
			nodo->prox = inicio;
			inicio = nodo;
		}
		tamanho++;
	}

	void adicionarPosicao(int valor, int posicao) {
		//alocar nodo
		//testar tamanho da lista e posicao
		//se true fazer a inserC'C#o
		//incrementar o tamanho da lista
	}

	void imprimirLista() {
		//imprimir toda a lista
	}

	//retorna o C-ndice
	int procurarValor(int valor) {
		int indice;
		//fazer
		return indice;
	}

	Nodo* procurarValor(int valor) {

		//fazer
		return tmp;
	}

	void removerValor(int valor) {
		//
	}

	void removerPosicao(int posicao) {
		//
	}

	void imprimirTamanho() {
		cout << "Tamanho da lista: " << tamanho << endl;
	}
}