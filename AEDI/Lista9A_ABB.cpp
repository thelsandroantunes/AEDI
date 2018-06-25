/*
    Programa: Árvore Binária de Busca (ABB)
    Autor: Thelsandro Antunes
    4ª Versão 
    Concluída em: 25/06/2018
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
    ~No();
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
No::~No()
{
    delete this->esq;
    delete this->dir;
}

class ABB
{
private:
    No *raiz;
    void inserir(int,No*);
    bool buscar(int,No*);
    bool remover(No*,No*,int);
    void printABB(No*,int);

public:
    ABB();
    void criar();
    bool vazio();
    void inserir(int);    
    bool buscar(int);
    bool remover(int);
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
bool ABB::buscar(int chave, No* raiz)
{
    if(raiz == NULL) return false;
    if(chave == raiz->item.getChave()) return true;
    else if(chave > raiz->item.getChave()) buscar(chave,raiz->dir);
    else if(chave < raiz->item.getChave()) buscar(chave,raiz->esq);
}
bool ABB::remover(No* pai, No* raiz, int value)
{
    /*if(raiz == NULL)
        return false;
    if(chave < raiz->item.getChave())
        return remover(chave, raiz->esq);
    else if(chave > raiz->item.getChave())
        return remover(chave, raiz->dir);

    if(chave == raiz->item.getChave())
    {
        //Caso 3: 2 Filhos
        if(raiz->esq != NULL && raiz->dir != NULL)    
        {
            cout << "2 filhos" <<endl;
            
            //Encontrar maior da esq de raiz
            No* ME = raiz->esq->dir;
            No*ant = raiz->esq;
            while(ME->dir != NULL)
            {
                ME = ME->dir;
                ant = ant->dir;
            }                
            
            raiz->item.setChave(ME->item.getChave());            
            ant->dir = NULL;

            delete ME;

            return true;
        }
        else
        {            
            No* aux;
            //Caso 1: NÃO há Folha
            if(raiz->esq == NULL and raiz->dir == NULL)
            {
                cout << "SEM filhos" <<endl;                
                delete raiz;
                raiz = NULL; 
            }                
            //Caso 2: 1 Filho (dir)
            else if(raiz->esq == NULL and raiz->dir != NULL)
            {
                cout << "1 filho (dir)" <<endl;
                aux = raiz->dir;
                delete raiz;
                raiz->item.setChave(aux->item.getChave());
                raiz->esq = raiz->dir = NULL;                
            }                
            //Caso 2: 1 Filho (esq)
            else if(raiz->dir == NULL and raiz->esq != NULL)
            {
                cout << "1 filho (esq)" <<endl;
                aux = raiz->esq;
                delete raiz;
                raiz->item.setChave(aux->item.getChave());
                raiz->esq = raiz->dir = NULL;
            } 

            return true;
        }
    }
    return false;*/
    if (!raiz) 
        return false;
    
    if (raiz->item.getChave() == value) 
    {
        if (raiz->esq == NULL || raiz->dir == NULL) 
        {
            No* aux = raiz->esq;
            if (raiz->dir) 
                aux = raiz->dir;
            
            if (pai)
            {
                if (pai->esq == raiz)
                    pai->esq = aux;
                else
                    pai->dir = aux;
            } 
            else 
                this->raiz = aux;
        } 
        else 
        {
            No* p = raiz->dir;
            while (p->esq) 
                p = p->esq;
            
            int aux = raiz->item.getChave();

            raiz->item.setChave(p->item.getChave());
            p->item.setChave(aux);
            
            return remover(raiz, raiz->dir, aux);
        }
        delete raiz;
    
        return true;
    }

    return remover(raiz, raiz->esq, value) || remover(raiz, raiz->dir, value);
}
void ABB::printABB(No* raiz, int tab)
{
    No *p = raiz;

    if(p == NULL)
        return;
    
    tab += DIST;
    printABB(p->dir, tab);
 
    cout<<endl;
    for (int i = DIST; i < tab; i++)
        cout<< " ";
    cout<<p->item.getChave()<<endl;
 
    printABB(p->esq, tab);
    /*if(raiz == NULL)
        return;

    tab += DIST;
    for (int i = DIST; i < tab; i++)
        cout<< " ";
    cout<<raiz->item.getChave()<<endl;
    printABB(raiz->dir, tab);
    printABB(raiz->esq, tab);*/

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
bool ABB::buscar(int chave)
{
    return buscar(chave,this->raiz);
}
bool ABB::remover(int chave)
{
    return remover(NULL, this->raiz, chave);
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
void opcao04(ABB*);


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
            case 4:
                opcao04(abb);
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
    cout<<" (1) - inserir"<<endl;
    cout<<" (2) - imprimir"<<endl;
    cout<<" (3) - buscar"<<endl;
    cout<<" (4) - remover"<<endl;
    cout<<" (0) - SAIR"<<endl;
    cout<<endl;
}
void opcao01(ABB *abb)
{
    int k;
    cout <<"insere(k) >> ";
    cin >> k;
    abb->inserir(k);
}
void opcao02(ABB *abb)
{
    abb->printABB();
}
void opcao03(ABB *abb)
{
    if(abb->vazio()){
        cout << "Árvore ABB está vazia."<<endl;
        return;
    } 
    
    int k;
    cout <<"busca(k) >> ";
    cin >> k;

    if(abb->buscar(k)) cout << "Chave está na ABB"<<endl;
    else cout << "NÃO encontrado"<<endl;
}
void opcao04(ABB *abb)
{
    if(abb->vazio()){
        cout << "Árvore ABB está vazia."<<endl;
        return;
    } 
    
    int k;
    cout <<"remove(k) >> ";
    cin >> k;

    if(abb->remover(k)) cout << "Removido com SUCESSO"<<endl;
    else cout << "NÃO encontrado na ABB"<<endl;
}