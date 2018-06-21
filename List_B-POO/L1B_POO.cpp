/*
    Programa: Pedras de Dominó
    Autor: Thelsandro Antunes
    1ª Versão 
    Concluída em: 21/06/2018
    Breve descrição:
        Este programa utiliza Classes, objetos, atributos, métodos e construtores em C++
*/

#include<iostream>
#define TAM 7 
#define N 28

using namespace std;

class Pedra
{
private:
    int um,dois;

public:
    Pedra()
    {
        this->um = 0;
        this->dois = 0;
    }

    Pedra(int um, int dois)
    {
        this->um = um;
        this->dois = dois;
    }

    int getUm()
    {
        return this->um;
    }

    void setUm(int um)
    {
        this->um = um;
    }

    int getDois()
    {
        return this->dois;
    }

    void setDois(int dois)
    {
        this->dois = dois;
    }

public:
    void print()
    {
        cout << "[" <<this->um<<"]["<<this->dois<<"]"<<endl;
        cout<<endl;
    }

    void print2()
    {
        if(this->valida())
            this->print();
        else    
            cout << "pedra inválida" << endl;
        
        cout<<endl;
    }

    bool valida()
    {
        return ((this->um>0 and this->um<7) and (this->dois>0 and this->dois<7)) ? true : false;
    }
    
};

void start();
void menu();
void print3(Pedra**, int);
void preenche(Pedra**);
void exercicio01();
void exercicio02();
void exercicio03();
void exercicio04();
void exercicio05();
void exercicio06();
void exercicio07();
void exercicio08();
void exercicio09();
void exercicio10();

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
                exercicio01();
                cout<<endl;
            break;
            case 2:
                exercicio02();
                cout<<endl;
            break;
            case 3:
                exercicio03();
                cout<<endl;
            break;
            case 4:
                exercicio04();
                cout<<endl;
            break;
            case 5:
                exercicio05();
                cout<<endl;
            break;
            case 6:
                exercicio06();
                cout<<endl;
            break;
            case 7:
                exercicio07();
                cout<<endl;
            break;
            case 8:
                exercicio08();
                cout<<endl;
            break;
            case 9:
                exercicio09();
                cout<<endl;
            break;
            case 10:
                exercicio10();
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
    cout<<"1  - Exercício01"<<endl;
    cout<<"2  - Exercício02"<<endl;
    cout<<"3  - Exercício03"<<endl;
    cout<<"4  - Exercício04"<<endl;
    cout<<"5  - Exercício05"<<endl;
    cout<<"6  - Exercício06"<<endl;
    cout<<"7  - Exercício07"<<endl;
    cout<<"8  - Exercício08"<<endl;
    cout<<"9  - Exercício09"<<endl;
    cout<<"10 - Exercício10"<<endl;
    cout<<"0 - SAIR"<<endl;
    cout<<endl;
}
void print3(Pedra **p, int n)
{        
    for(int i = 0; i < n; i++)  p[i]->print();    
}
void preenche(Pedra** p)
{
    int x = 0;
    while(x<N)
    {
        for(int i = 0; i < TAM; i++)
        {       
            for(int j = i; j < TAM; j++)    
                p[x++] = new Pedra(i,j); 
        }        
    }
}
void exercicio01()
{
    Pedra pedra;

    pedra.setUm(2);
    pedra.setDois(5);

    cout << "[" <<pedra.getUm()<<"]["<<pedra.getDois()<<"]"<<endl;
}
void exercicio02()
{
    Pedra pedra2;

    pedra2.setUm(1);
    pedra2.setDois(3);
    pedra2.print();

}
void exercicio03()
{
    Pedra *pedra3 = new Pedra();

    pedra3->print();
    pedra3->setUm(5);
    pedra3->setDois(6);
    pedra3->print();
}
void exercicio04()
{
    Pedra *pedra4 = new Pedra(6,6);

    pedra4->print();
    pedra4->setUm(2);
    pedra4->setDois(1);
    pedra4->print();
}
void exercicio05()
{
    Pedra *pedra5 = new Pedra(-1,6);

    if(pedra5->valida()) pedra5->print();
    else    cout << "pedra inválida " << endl;
}
void exercicio06()
{
    Pedra *pedra6 = new Pedra(3,5);
    pedra6->print2();
}
void exercicio07()
{
    Pedra *pedra7 = new Pedra(2,0);
    cout << "[" <<pedra7->getUm()<<"]["<<pedra7->getDois()<<"]"<<endl;
}
void exercicio08()
{
    Pedra **p = new Pedra*[N];
    preenche(p);    
    cout << "Exercício 08" <<endl;
    print3(p,N);
}
void exercicio09()
{
    Pedra **p2 = new Pedra*[N];
    preenche(p2);
    cout << "Exercício 09" <<endl;
    print3(p2,N);
    delete[] p2; 
    cout<<"Objetos deletados"<< endl;
    
}
void exercicio10()
{
    exercicio08();
    cout << "À partir do exercício 03 é utilizado dinamicamente a classe Pedra com os métodos get e set"<<endl;
}
