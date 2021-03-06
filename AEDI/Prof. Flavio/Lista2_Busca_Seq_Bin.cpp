/*
    Programa: Busca Sequencial e Binária
    Autor: Thelsandro Antunes
    4ª Versão 
    Concluída em: 22/06/2018
    Breve descrição:
        Este programa de Disciplinas utiliza Classes, objetos, atributos, métodos e construtores em C++        
*/

#include<iostream>
#define TAM 10

using namespace std;

class Disciplina
{
private:
    string nome;
    int codigo;
    int carga_horaria;    

public:
    Disciplina(){}
    
    Disciplina(string nome,int codigo, int carga_horaria)
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
    int getCodigo()
    {
        return this->codigo;
    }

    void setCodigo(int codigo)
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

void start();
void menu();
void verificar(Disciplina[], int);
void preencher(Disciplina[]);
void bubbleSort(Disciplina[]);
int buscaBinaria(int, Disciplina[]);
int buscaTrinaria(int, Disciplina[]);
int buscaSequencial(int, Disciplina[]);
int buscaSequencialSentinela(int, Disciplina[]);
void imprimir2(Disciplina[]);
void questao01();
void questao02();
void questao03();
void questao04();
void questao05();
void questao06Extra();

int main()
{
    start();

    return 0;
}
void start()
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
                questao01();
                cout<<endl;
            break;
            case 2:
                questao02();
                cout<<endl;
            break;
            case 3:
                questao03();
                cout<<endl;
            break;
            case 4:
                questao04();
                cout<<endl;
            break;
            case 5:
                questao05();
                cout<<endl;
            break;
            case 6:
                questao06Extra();
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
    cout<<"1  - questão01"<<endl;
    cout<<"2  - questão02"<<endl;
    cout<<"3  - questão03"<<endl;
    cout<<"4  - questão04"<<endl;
    cout<<"5  - questão05"<<endl;
    cout<<"6  - questão06-EXTRA"<<endl;
    cout<<"0 - SAIR"<<endl;
    cout<<endl;
}
void verificar(Disciplina p[], int pos)
{
    cout<<endl;
    if(pos==-1)
        cout << "elemento Não encontrado"<<endl;
    else
        p[pos].imprimir();
}
void preencher(Disciplina p[])
{    
    for(int i = 0; i < TAM; i++)
    {
        string nome;
        int ch,c;

        cin >> nome >> c >> ch;
        p[i].setNome(nome);
        p[i].setCodigo(c);
        p[i].setCarga_Horaria(ch);
    }    
}
void bubbleSort(Disciplina p[])
{
    int i,j;
    Disciplina temp;
    
    for(int i = (TAM-1); i >= 0; i--)
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
int buscaBinaria(int k, Disciplina p[])
{
    int i=0,j=TAM-1;
    
    while(i<=j)
    {    
        int m = (i+j)/2;
        if(k == p[m].getCodigo()) return m;
        else if(k < p[m].getCodigo()) j = m - 1;
        else i = m + 1;
    }
    return -1;
}
int buscaTrinaria(int chave, Disciplina p[])
{
    int i=0, j=(TAM/2), k=(TAM-1);
    
    int m1 = ((i+j+k)/3)-1 ;
    int m2= ((m1+k)/2)+1;

    while(i<=k and j <=k)
    {    
    
        if(chave == p[m1].getCodigo()) return m1;
        else if(chave == p[m2].getCodigo()) return m2;        
        else if((chave > p[m1].getCodigo()) and (chave < p[m2].getCodigo()))
        {
            i = m1 + 1;            
            k = m2 - 1;
            j = (i+k)/2;
            if(i == k)
            {
                m1 = m2 = i;
                if(chave == p[m1].getCodigo()) return m1;
            }
        }
        else if(chave < p[m1].getCodigo())
        {
            k = m1 - 1;
            j = (i+k)/2;
            if(i == k)
            {
                m1 = m2 = i;
                if(chave == p[m1].getCodigo()) return m1;
            }
        }else if(chave > p[m2].getCodigo())
        {
            i = m2 + 1;
            j = (i+k)/2;

            if(i == k)
            {
                m1 = m2 = i;
                if(chave == p[m1].getCodigo()) return m1;
            }
        }

        m1 = ((i+j+k)/3)-1 ;
        m2= ((m1+k)/2)+1;
        
    }
    
    return -1;
}
int buscaSequencial(int k, Disciplina p[])
{
    
    for(int i = 0; i < TAM; i++)
    {
        if(k == p[i].getCodigo())
            return i;
    }
    
    return -1;
}
int buscaSequencialSentinela(int k, Disciplina p[])
{
    p[TAM].setCodigo(k); // posiciona k como “sentinela”
    int i = 0;
    
    while(k != p[i].getCodigo()) i++;
    
    if(i == TAM) return -1;
    else return i;
}
void imprimir2(Disciplina p[])
{
    cout << "----------LISTA----------" << endl;
    cout<<endl;
    for(int i = 0; i < TAM; i++)
        p[i].imprimir();

    cout << "-------------------------" << endl;
}
void questao01()
{
    Disciplina d;
    d.setNome("Algoritmo e Estruturas de Dados");
    d.setCodigo(123456);
    d.setCarga_Horaria(90);

    d.imprimir();
}
void questao02()
{
    Disciplina vetor[TAM];    
    preencher(vetor);
    cout<<endl;
    imprimir2(vetor);

}
void questao03()
{
    Disciplina vetor[TAM];
    preencher(vetor);

    int chave;
    cout << "Código a buscar: ";
    cin >> chave;

    verificar(vetor,buscaSequencial(chave,vetor));
}
void questao04()
{
    Disciplina vetor[TAM+1];    
    preencher(vetor);

    int chave;
    cout << "Código a buscar: ";
    cin >> chave;
    verificar(vetor,buscaSequencialSentinela(chave,vetor));
}
void questao05()
{
    Disciplina vetor[TAM];
    
    preencher(vetor);
    bubbleSort(vetor);
    cout<<endl;
    cout<<"Vetor de Disciplina Ordenado"<<endl;
    imprimir2(vetor);
    
    int chave;
    cout << "Código a buscar: ";
    cin >> chave;
    
    verificar(vetor,buscaBinaria(chave,vetor));

}
void questao06Extra()
{
    Disciplina vetor[TAM];
    
    preencher(vetor);
    bubbleSort(vetor);
    cout<<endl;
    cout<<"Vetor de Disciplina Ordenado"<<endl;
    imprimir2(vetor);
    
    int chave;
    cout << "Código a buscar: ";
    cin >> chave;

    verificar(vetor,buscaTrinaria(chave,vetor));
}