#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
typedef struct node{
struct Node *esq;
int valor;
struct Node *dir;
}Node;

Node *criar(int novoValor);

Node *inserir(Node *raiz, int novoValor);

void buscar();

void inOrder(Node *raiz);

void preOrder(Node *raiz);

void posOrder(Node *raiz);

void removeBiggest(Node *raiz);

#endif // NODE_H_INCLUDED
