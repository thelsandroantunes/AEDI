/*
    Programa: Árvore Binária de Busca (ABB)
    Autor: Thelsandro Antunes
    1ª Versão 
    Concluída em: 24/06/2018
    Breve descrição:
        Este programa utiliza Classes, objetos, atributos, métodos e construtores em C++
*/

#include<iostream>
#define DIST 5

using namespace std;

class Item
{
private:
    int chave;

public:
    Item();
    int getChave();
    void setChave(int chave);
};
Item::Item(){}
int Item::getChave()
{
    return this->chave;
}
void Item::setChave(int chave)
{
    this->chave = chave;
}

class No
{
public:
    Item item;
    No *dir, *esq;

    No();
    No(int);
};
No::No()
{
    this->dir = NULL;
    this->esq = NULL;
}
No::No(int chave)
{
    this->dir = NULL;
    this->esq = NULL;
    this->item.setChave(chave);
}

class ABB
{
private:
    No *raiz;

    void inserir(int,No*);
    void printABB(No*,int);

public:
    void criar();
    bool vazio();
    void inserir(int);    
    void printABB();
};

//Métodos privados
void ABB::inserir(int chave, No* raiz)
{
    No *no = this->raiz;
    No *ant = NULL;

    while(no != NULL)
    {
        ant = no;
        if(no->item.getChave() < chave)
            no = no->dir;
        else
            no = no->esq;
    }

    if(this->vazio())
        this->raiz = new No(chave);
    else if(ant->item.getChave() < chave)
        ant->dir = new No(chave);
    else if(ant->item.getChave() > chave)
        ant->esq = new No(chave);
    else
        cout <<chave<<" >> Item já existe na ABB"<<endl;
}
void ABB::printABB(No* raiz, int tab)
{
    /*if(raiz != NULL)
    {
        printABB(raiz->esq);
        cout <<raiz->dado<< endl;
        printABB(raiz->dir);
    }*/
    if(raiz == NULL)
        return;

    tab += DIST;
    printABB(raiz->dir, tab);
 
    cout<<endl;
    for (int i = DIST; i < tab; i++)
        cout<< " ";
    cout<<raiz->item.getChave()<<endl;
 
    printABB(raiz->esq, tab);    
}

//Métodos públicos
void ABB::criar()
{
    this->raiz = NULL;
}
bool ABB::vazio()
{
    return this->raiz == NULL;
}
void ABB::inserir(int chave)
{
    inserir(chave,this->raiz);
}
void ABB::printABB()
{
    if(this->raiz == NULL)
        cout << "ABB vazia"<<endl;
    else printABB(this->raiz,0);
}

int main()
{
    ABB abb;
    abb.criar();
    
    abb.inserir(10);    
    abb.inserir(6);
    abb.inserir(4);
    abb.inserir(9);
    abb.inserir(15);
    abb.inserir(13);
    abb.inserir(14);
    abb.inserir(16);
    abb.inserir(4);

    abb.printABB();
    return 0;
}