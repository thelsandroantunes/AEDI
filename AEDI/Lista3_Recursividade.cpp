/*
    Programa: Recursividade
    Autor: Thelsandro Antunes
    1ª Versão 
    Concluída em: 22/06/2018
    Breve descrição:
        Este programa utiliza Funções em C++        
*/

#include<iostream>
#include<ctime>
#define VALIDO   1
#define INVALIDO 0

using namespace std;

void start();
void menu();
int valorN();
void printRecursive(int);
void printRecursive2(int);
void printRecursive3(int[], int);
void aleatoriosNP(int[], int);
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
    cout<<"1  - questão01:recursivo"<<endl;
    cout<<"2  - questão02: recursivo inverso"<<endl;
    cout<<"3  - questão03"<<endl;
    cout<<"4  - questão04"<<endl;
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
        cout << v[tam] << " ";
    else
    {
        printRecursive3(v, tam-1);
        cout << v[tam-1] << " ";
    } 
}
void aleatoriosNP(int v[], int tam)
{   
    srand(time(NULL));
    int flag;
    for(int i = 0; i < tam; ++i) {
        do 
        {
            if(i%2==1)
            {
                v[i] = (rand() % 1000) - 7;
                flag = VALIDO;
            }
            else
            {
                v[i] = (rand() % 1000)*(-1) ;
                flag = VALIDO;
            }
          
            for(int j = 0; j < i; ++j)
                if (v[i] == v[j])
            flag = INVALIDO;
       } while (flag == INVALIDO);   
    }      
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
    cout << endl;
    printRecursive3(v,tam);
}
void questao04(){}
void questao05(){}
void questao06(){}
void questao07(){}
