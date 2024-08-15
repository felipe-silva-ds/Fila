#include <iostream>
using namespace std;

class Fila {
private:
    int capacidade;
    int* elementos;
    int inicio;
    int fim;
    int tamanho;

public:
    Fila(int capacidade) {
        this->capacidade = capacidade;
        elementos = new int[capacidade];
        inicio = 0;
        fim = -1;
        tamanho = 0;
    }

    ~Fila() {
        delete[] elementos;
    }

    bool estaVazia() {
        return tamanho == 0;
    }

    bool estaCheia() {
        return tamanho == capacidade;
    }

    void inserir(int valor) {
        if (estaCheia()) {
            cout << "Fila cheia! Não é possível inserir o elemento.\n";
            return;
        }
        fim = (fim + 1) % capacidade;
        elementos[fim] = valor;
        tamanho++;
    }

    void remover() {
        if (estaVazia()) {
            cout << "Fila vazia! Não é possível remover o elemento.\n";
            return;
        }
        inicio = (inicio + 1) % capacidade;
        tamanho--;
    }

    int consultarInicio() {
        if (estaVazia()) {
            cout << "Fila vazia! Não há elemento no início.\n";
            return -1;
        }
        return elementos[inicio];
    }

    void imprimirFila() {
        if (estaVazia()) {
            cout << "Fila vazia!\n";
            return;
        }
        cout << "Fila: ";
        for (int i = 0; i < tamanho; i++) {
            cout << elementos[(inicio + i) % capacidade] << " ";
        }
        cout << "\n";
    }
};

int main() {
    Fila fila(5);

    fila.inserir(5);
    fila.inserir(15);
    fila.inserir(45);
    fila.inserir(135);
    fila.imprimirFila();

    cout << "Elemento no início da fila: " << fila.consultarInicio() << "\n";
     
    printf("Vamos fazer uma remoção...\n") ;
    fila.remover();
    fila.imprimirFila();
    printf("Vamos adicionar valores 10 e 20 na lista\n");
    fila.inserir(10);
    fila.inserir(20);
    fila.imprimirFila();
    printf("Tentar inserir um valor com a lista cheia!!\n");
    fila.inserir(1);  // Tentativa de inserção quando a fila já está cheia
    
    cout << "Elemento no início da fila: " << fila.consultarInicio() << "\n";


    printf("Vamos remover os elementos até a fila fica vazia\n ");
    fila.remover();
    fila.remover();
    fila.remover();
    fila.remover();
    fila.remover(); // Tentativa de remoção quando a fila já está vazia
    fila.imprimirFila();

    return 0;
}
