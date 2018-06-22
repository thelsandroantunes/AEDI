/*
    Programa: Busca Sequencial e Binária
    Autor: Thelsandro Antunes
    2ª Versão 
    Concluída em: 22/06/2018
    Breve descrição:
        Este programa utiliza Classes, objetos, atributos, métodos e construtores em C++
        para o cenário educacional.
*/

#include<iostream>
#define TAM 5

using namespace std;

class Disciplina
{
private:
    string nome;
    string codigo;
    int carga_horaria;    

public:
    Disciplina(){}
    
    Disciplina(string nome,string codigo, int carga_horaria)
    {
        this->nome = nome;
        this->codigo = codigo;
        this->carga_horaria = carga_horaria;
    }

    string getNome()
    {
        return this->nome;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }
    string getCodigo()
    {
        return this->codigo;
    }

    void setCodigo(string codigo)
    {
        this->codigo = codigo;
    }

    int getCarga_Horaria()
    {
        return this->carga_horaria;
    }

    void setCarga_Horaria(int carga_horaria)
    {
        this->carga_horaria = carga_horaria;
    }

public:
    void imprimir()
    {
        cout << "Disciplina: " << this->nome<<endl;
        cout << "Código: " << this->codigo<<endl;
        cout << "Carga Horária: " << this->carga_horaria<<endl;
        cout<<endl;
    }

    
};

void bubbleSort(Disciplina[], int);
int buscaBinaria(string, Disciplina[], int);
int buscaSequencial(string, Disciplina[], int);
void imprimir2(Disciplina[],int);
int buscaSequencial();
void questao01();
void questao02();
void questao03();
void questao04();
void questao05();

int main()
{
    questao05();

    return 0;
}
void bubbleSort(Disciplina p[], int tam)
{
    int i,j;
    Disciplina temp;
    
    for(int i = (tam-1); i >= 0; i--)
    {   
        for(int j = 1; j <= i; j++)
        {              
            if(p[j-1].getCodigo() > p[j].getCodigo())
            {
                temp = p[j-1];
                p[j-1] = p[j];
                p[j] = temp;
            }
        }
    }    
}
int buscaBinaria(string k, Disciplina p[], int tam)
{
    int i=0,j=tam-1;
    
    while(i<=j)
    {    
        int m = (i+j)/2;
        if(k == p[m].getCodigo()) return m;
        else if(k < p[m].getCodigo()) j = m - 1;
        else i = m + 1;
    }
    return -1;
}
int buscaSequencial(string k, Disciplina p[], int tam)
{
    
    for(int i = 0; i < tam; i++)
    {
        if(k == p[i].getCodigo())
            return i;
    }
    
    return -1;
}
int buscaSequencialSentinela(string k, Disciplina p[], int tam)
{
    p[tam].setCodigo(k); // posiciona k como “sentinela”
    int i = 0;
    
    while(k != p[i].getCodigo())
    {
        i++;
    }
    
    if(i == tam) return -1;
    else return i;
}
void imprimir2(Disciplina p[], int tam)
{
    cout << "----------LISTA----------" << endl;
    cout<<endl;
    for(int i = 0; i < tam; i++)
        p[i].imprimir();

    cout << "-------------------------" << endl;
}
void questao01()
{
    Disciplina d;
    d.setNome("Algoritmo e Estruturas de Dados");
    d.setCodigo("123456-A2018");
    d.setCarga_Horaria(90);

    d.imprimir();
}
void questao02()
{
    Disciplina vetor[TAM];
    
    for(int i = 0; i < TAM; i++)
    {
        string nome,c;
        int ch;

        cin >> nome >> c >> ch;
        vetor[i].setNome(nome);
        vetor[i].setCodigo(c);
        vetor[i].setCarga_Horaria(ch);
    }
    cout<<endl;
    imprimir2(vetor,TAM);

}
void questao03()
{
    Disciplina vetor[TAM];
    
    for(int i = 0; i < TAM; i++)
    {
        string nome,c;
        int ch;

        cin >> nome >> c >> ch;
        vetor[i].setNome(nome);
        vetor[i].setCodigo(c);
        vetor[i].setCarga_Horaria(ch);
    }

    string chave;
    cout << "Código a buscar: ";
    cin >> chave;
    int pos = buscaSequencial(chave,vetor,TAM);
    if(pos==-1)
    {
        cout << "elemento Não encontrado"<<endl;
    }
    else
    {
        vetor[pos].imprimir();
    }

}
void questao04()
{
    Disciplina vetor[TAM+1];
    
    for(int i = 0; i < TAM; i++)
    {
        string nome,c;
        int ch;

        cin >> nome >> c >> ch;
        vetor[i].setNome(nome);
        vetor[i].setCodigo(c);
        vetor[i].setCarga_Horaria(ch);
    }

    string chave;
    cout << "Código a buscar: ";
    cin >> chave;
    int pos = buscaSequencialSentinela(chave,vetor,TAM);
    //cout << "pos >> "<< pos <<endl;
    if(pos==-1)
    {
        cout << "elemento Não encontrado"<<endl;
    }
    else
    {
        vetor[pos].imprimir();
    }
}
void questao05()
{
    Disciplina vetor[TAM];
    
    for(int i = 0; i < TAM; i++)
    {
        string nome,c;
        int ch;

        cin >> nome >> c >> ch;
        vetor[i].setNome(nome);
        vetor[i].setCodigo(c);
        vetor[i].setCarga_Horaria(ch);
    }

    bubbleSort(vetor,TAM);
    cout<<endl;
    cout<<"Vetor de Disciplina Ordenado"<<endl;
    imprimir2(vetor,TAM);
    
    string chave;
    cout << "Código a buscar: ";
    cin >> chave;
    
    int pos = buscaBinaria(chave,vetor,TAM);

    if(pos==-1)
    {
        cout << "elemento Não encontrado"<<endl;
    }
    else
    {
        vetor[pos].imprimir();
    }

}