/*
    Programa: Recursividade
    Autor: Thelsandro Antunes
    5ª Versão 
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
void copiaVetor(int[], int[], int, int);
void copiaVetor2(int[], int[], int[], int, int);
void somaVetores(int[], int[], int[], int);
void printRecursive(int);
void printRecursive2(int);
void printRecursive3(int[], int);
void aleatoriosNP(int[], int);
int existeNumero(int[],int, int);
void bubbleSort(int[],int);
void bubbleSortRecursiva(int[],int);
int buscaSequencialRecursiva(int, int[], int);
int buscaBinariaRecursiva(int, int[], int, int);
void questao01();
void questao02();
void questao03();
void questao04();
void questao05();
void questao06();
int questao06A(int[], int);
void questao06B(int v[], int, int);
void questao06C(int[], int);
void questao6AB(int[], int);
void questao07();
void questao07A(int[], int, int);
void questao07B(int[], int);

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
    cout<<" (1)  - recursivo(1,2,...,N)"<<endl;
    cout<<" (2)  - recursivo inverso(N,...,2,1)"<<endl;
    cout<<" (3)  - recursivo v[] ordenado"<<endl;
    cout<<" (4)  - busca sequencial recursiva V[]"<<endl;
    cout<<" (5)  - busca binaria recursiva v[]"<<endl;
    cout<<" (6)  - (A)obtém o máximo elemento do v[]"<<endl;
    cout<<"        (B)troca máximo elemento com o último no v[]"<<endl;
    cout<<"        (C)executa (A) e (B) nos subvetores v[n-2] e v[n-3]"<<endl;
    cout<<" (7)  - (A)soma 1ª metade + 2ª metade do v[]"<<endl;
    cout<<"        (B)aplica (A) nas metades do v[]"<<endl;
    cout<<" (0)  - SAIR"<<endl;
    cout<<endl;
}
int valorN()
{
    int n;

    cout << "n >> ";
    cin >> n;
    return n;
}
void copiaVetor(int v1[], int v2[], int inicio, int fim)
{ 
    for(int i = 0; i < fim; i++)
        v1[i] = v2[i];
}
void copiaVetor2(int v1[], int v2[], int v[], int tam)
{
    for(int i = 0, j = 0; i < tam; i++)
    {
        if(i < tam/2)
            v1[i] = v[i];
        else    
            v2[j++] = v[i];
    }
        
}
void somaVetores(int v1[], int v2[], int soma[], int tam)
{
    for(int i = 0; i < tam; i++)
        soma[i] = v1[i] + v2[i];
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
void bubbleSortRecursiva(int v[],int tam)
{
    if (tam == 1)
        return;
    
    int temp;
    for (int j=0; j<tam-1; j++)
    {
        if (v[j] > v[j+1])
        {
            temp = v[j+1];
            v[j+1] = v[j];
            v[j] = temp;
        }
    }
 
    bubbleSortRecursiva(v, tam-1);
}
int buscaSequencialRecursiva(int k, int v[], int tam)
{   
    if(tam == 0)
        return (k == v[tam]) ? tam : -999;
    else
    {
        if(k == v[tam])
            return tam;
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

    return -999;
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

    if(buscaBinariaRecursiva(k,v,0,tam) == -999) cout << "NÃO ENCONTRADO" <<endl;
    else cout << "Elemento encontrado " << endl;
}
void questao06()
{
    int tam,k, max;
    cout << "tamanho do vetor de inteiros >> ";
    do{
        cin >> tam;
        if(tam < 5)
            cout<<"(tamanho > 4) >> ";
    }while(tam < 5);
    
    int v[tam];    
    
    aleatoriosNP(v,tam);
    cout << endl;
    //bubbleSortRecursiva(v,tam);
    questao6AB(v,tam);
    cout<<endl;
    cout << "Letra (C):" << endl;
    questao06C(v,tam);
}
int questao06A(int v[], int tam)//Encontra o Maior elemento do Vetor NÃO ordenado
{   
    if (tam == 1) return (v[0]);
    else {
            int max;
            max = questao06A(v, tam-1);

            if (max > v[tam-1])
                return max;
            else 
                return (v[tam-1]);
    }
}
void questao06B(int v[], int tam, int max)//Troca o Maior elemento com o ÚLTIMO elemento do Vetor
{
    int ultimaPos = tam-1;
    int aux,i;
    i = buscaSequencialRecursiva(max,v,tam);
    cout<<endl;
    cout << "MAX >> [" <<max<<"] trocado pelo ULTIMO elemento do vetor >> ["<<v[ultimaPos]<<"] "<<endl;

    aux = v[i];
    v[i] = v[ultimaPos];
    v[ultimaPos] = aux;

}
void questao06C(int v[], int tam)//Chama letra (A) e (B) para subVetores
{
    
    int v1[tam-2];
    int v2[tam-3];
    copiaVetor(v1,v,0,tam-2);
    copiaVetor(v2,v,0,tam-3);
    cout<<"-----------------------------------"<<endl;
    cout<<"SubVetor1"<<endl;
    questao6AB(v1,tam-2);
    cout<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"SubVetor2"<<endl;
    questao6AB(v2,tam-3);
    cout<<endl;
    cout<<"-----------------------------------"<<endl;
}
void questao6AB(int v[], int tam)
{
    printRecursive3(v,tam);
    cout<<endl;
    int max = questao06A(v,tam);
    cout << "Letra (A):" << endl;
    cout <<"MAX >> "<< max << endl;
    cout<<endl;
    cout << "Letra (B):" << endl;
    questao06B(v,tam, max);
    printRecursive3(v,tam);
    cout<<endl;
}
void questao07()
{
    int tam,k, max;
    
    cout << "tamanho do vetor de inteiros >> ";
    do
    {
        cin >> tam;
        if(tam < 5)
            cout<<"(tamanho > 4) >> ";
    }while(tam < 10);
    
    int v[tam];
    
    aleatoriosNP(v,tam);
    cout << endl;
    
    printRecursive3(v, tam);
    cout<<endl;
   
    cout<<"Letra (A): "<<endl;
    questao07A(v, tam/2, tam);
    cout<<endl;
   
    cout<<"Letra (B): "<<endl;
    questao07B(v,tam);
}
void questao07A(int v[], int metade, int tam)//Soma a 1ª metade do vetor com a 2ª metade
{
    int v1[metade], v2[metade], soma[metade];

    copiaVetor2(v1,v2,v,tam);
    somaVetores(v1,v2,soma,metade);
    
    cout<<endl;
    cout<<"v[] >> soma da 1ª metade + 2ª metade do vetor"<<endl;
    printRecursive3(soma, metade);
    cout<<endl;
}
void questao07B(int v[], int tam)//Divide as metades em mais 2 metades
{
    int metade = tam/2;
    int v1[metade],v2[metade];
    copiaVetor2(v1,v2,v,tam);

    cout<<"1ª METADE v1[]"<<endl;
    printRecursive3(v1,metade);
    cout<<endl;
    questao07A(v1,metade/2,metade);

    cout<<endl;
    cout<<endl;
    cout<<"2ª METADE v2[]"<<endl;
    printRecursive3(v2,metade);
    cout<<endl;
    questao07A(v2,metade/2, metade);

    cout<<endl;
}