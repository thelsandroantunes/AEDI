/*
    Programa: Árvore Binária de Busca (ABB)
    Autor: Thelsandro Antunes
    2ª Versão 
    Concluída em: 24/06/2018
    Breve descrição:
        Este programa utiliza Classes, objetos, atributos, métodos e construtores em C++
*/

#include<iostream>
#define DIST 3

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
    ABB();
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
        cout <<"["<<chave<<"] >> Item já existe na ABB"<<endl << endl;
}
void ABB::printABB(No* raiz, int tab)
{
    /*if(raiz == NULL)
        return;

    tab += DIST;
    printABB(raiz->dir, tab);
 
    cout<<endl;
    for (int i = DIST; i < tab; i++)
        cout<< " ";
    cout<<raiz->item.getChave()<<endl;
 
    printABB(raiz->esq, tab);*/
    if(raiz == NULL)
        return;

    tab += DIST;
    for (int i = DIST; i < tab; i++)
        cout<< " ";
    cout<<raiz->item.getChave()<<endl;
    printABB(raiz->dir, tab);
    printABB(raiz->esq, tab);

}

//Métodos públicos
ABB::ABB()
{
    this->raiz = NULL;
}
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
//Funções gerais
void start(ABB*);
void menu();
void opcao01(ABB*);
void opcao02(ABB*);
void opcao03(ABB*);

int main()
{
    ABB *abb = new ABB();
    
    start(abb);

    return 0;
}
void start(ABB *abb)
{
    int op;
    do
    {
        menu();
        cout << ">> ";
        cin >> op;

        switch(op){
            case 0:
            break;
            case 1:
                opcao01(abb);
                cout<<endl;
            break;
            case 2:
                opcao02(abb);
                cout<<endl;
            break;
            case 3:
                opcao03(abb);
                cout<<endl;
            break;            
            default:
                cout << "operação inválida" << endl;
            break;
        }        
    } while (op != 0);
    cout<<endl;

}
void menu()
{
    cout<<" MENU "<<endl;
    cout<<" (1)  - inserir"<<endl;
    cout<<" (2)  - imprimir"<<endl;
    cout<<" (3)  - "<<endl;
    cout<<" (0)  - SAIR"<<endl;
    cout<<endl;
}
void opcao01(ABB *abb)
{
    int k;
    cout <<"chave >> ";
    cin >> k;
    abb->inserir(k);
}
void opcao02(ABB *abb)
{
    abb->printABB();
}
void opcao03(ABB *abb)
{
    cout <<"OK"<< endl;
}