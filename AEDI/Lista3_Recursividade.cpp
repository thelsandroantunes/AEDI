/*
    Programa: Recursividade
    Autor: Thelsandro Antunes
    3ª Versão 
    Concluída em: 23/06/2018
    Breve descrição:
        Este programa utiliza Funções de Ordenação(Bubble Sort), Busca Sequencial e Binária em C++        
*/

#include<iostream>
#include<ctime>
#define VALIDO   1
#define INVALIDO 0
#define LIMITE 100

using namespace std;

void start();
void menu();
int valorN();
void printRecursive(int);
void printRecursive2(int);
void printRecursive3(int[], int);
void aleatoriosNP(int[], int);
int existeNumero(int[],int, int);
void bubbleSort(int[],int);
int buscaSequencialRecursiva(int, int[], int);
int buscaBinariaRecursiva(int, int[], int, int);
void questao01();
void questao02();
void questao02(int);
void questao03();
void questao04();
void questao05();
void questao06();
void questao07();


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
                questao06();
                cout<<endl;
            break;
            case 7:
                questao07();
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
    cout<<"1  - questão01:recursivo(1,2,...,N)"<<endl;
    cout<<"2  - questão02:recursivo inverso(N,...,2,1)"<<endl;
    cout<<"3  - questão03:recursivo v[] ordenado"<<endl;
    cout<<"4  - questão04:busca sequencial recursiva V[]"<<endl;
    cout<<"5  - questão05"<<endl;
    cout<<"6  - questão06"<<endl;
    cout<<"7  - questão07"<<endl;
    cout<<"0 - SAIR"<<endl;
    cout<<endl;
}
int valorN()
{
    int n;

    cout << "n >> ";
    cin >> n;
    return n;
}
void printRecursive(int n)
{
    if(n > 1)
    {
        printRecursive(n-1);
    } 
    
    cout << n << " ";
    return;    
}
void printRecursive2(int n)
{
    if(n > 0) 
    {
        cout << n << " ";
        printRecursive2(n-1);
    }
    else return;
}
void printRecursive3(int v[], int tam)
{
    if(tam == 1)
        cout << v[tam-1] << " ";
    else
    {
        printRecursive3(v, tam-1);
        cout << v[tam-1] << " ";
    } 
}
void aleatoriosNP(int v[], int tam)//negativos e positivos
{   
    srand(time(NULL));
    int num;
        
    for(int i = 0; i < tam; i++)
    {
        num = rand() % LIMITE;
        while(existeNumero(v,i, num) == 1)
        {
            num = rand() % LIMITE;
        }
        if(i%2==0) v[i] = num;
        else v[i] = num*(-1);
    }        
}
int existeNumero(int v[],int i, int num)
{    
    for(int j = 0; j < i; j++)
    {
        if(v[j]==num) 
            return VALIDO;
    }        
    return INVALIDO;
}
void bubbleSort(int v[],int tam)
{
    int i,j;
    int temp;
    
    for(int i = (tam-1); i >= 0; i--)
    {   
        for(int j = 1; j <= i; j++)
        {              
            if(v[j-1] > v[j])
            {
                temp = v[j-1];
                v[j-1] = v[j];
                v[j] = temp;
            }
        }
    }    
}
int buscaSequencialRecursiva(int k, int v[], int tam)
{   
    if(tam == 0)
        return (k == v[tam]) ? 1 : -1;
    else
    {
        if(k == v[tam])
            return 1;
        buscaSequencialRecursiva(k,v,tam-1);        
    }
}
int buscaBinariaRecursiva(int k, int v[], int i, int j)
{
    while(i<=j)
    {
        int m;
        m=(i+j)/2;
        if(v[m]==k)
            return m;
        else if (v[m]<k)
            return buscaBinariaRecursiva(k, v, m+1, j);
        else
            return buscaBinariaRecursiva(k, v, i, m-1);
    }

    return -1;
}
void questao01()//OK
{
    
    cout <<"Impressão Recursiva: " << endl;
    printRecursive(valorN());
    cout << endl;
}
void questao02()//OK
{
    cout <<"Impressão Recursiva Inversa: " << endl;
    printRecursive2(valorN());
    cout << endl;
}
void questao03()//OK
{
    int tam;

    cout << "tamanho do vetor de inteiros >> ";
    cin >> tam;
    int v[tam];

    aleatoriosNP(v,tam);
    bubbleSort(v,tam);
    cout << endl;
    printRecursive3(v,tam);
}
void questao04()//OK
{
    int tam,k;

    cout << "tamanho do vetor de inteiros >> ";
    cin >> tam;
    
    int v[tam];    

    aleatoriosNP(v,tam);
    cout << endl;
    bubbleSort(v,tam);
    printRecursive3(v,tam);

    cout << endl;
    cout << "chave >> ";
    cin >> k;

    if(buscaSequencialRecursiva(k,v,tam) == 1) cout << "Elemento encontrado " << endl;
    else cout << "NÃO ENCONTRADO" << endl;
}
void questao05()//OK
{
    int tam,k;

    cout << "tamanho do vetor de inteiros >> ";
    cin >> tam;
    
    int v[tam];    

    aleatoriosNP(v,tam);
    cout << endl;
    bubbleSort(v,tam);
    printRecursive3(v,tam);

    cout << endl;
    cout << "chave >> ";
    cin >> k;

    if(buscaBinariaRecursiva(k,v,0,tam) == -1) cout << "NÃO ENCONTRADO" <<endl;
    else cout << "Elemento encontrado " << endl;
}
void questao06(){}
void questao07(){}
