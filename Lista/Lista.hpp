struct Nodo {
	int dado;
	Nodo *prox, *ant;
};

class Lista{
private:
	Nodo *inicio, *fim, *tmp, *nodo, *novo;
	int tamanho;

	Nodo* alocarNodo(int valor);

public:

	Lista();
	~Lista();

	void adicionarInicio(int valor);
	void adicionarFim(int valor);
	void adicionar(int valor, int posicao);

	void imprimir();
	Nodo* getNodo(int posicao);		//retorna o endereco de memoria do nodo na posicao
	int getValor(int posicao);		//retorna o valor do nodo na posicao
	Nodo* procurarValor(int valor); //retorna o primeiro nodo que contenha o valor
	void removerValor(int valor);
	void removerPosicao(int posicao);
	void limpar();

	int getTamanho();
};