/*
# Autores: Thelsandro Antunes e Abraão Brito
# Data: 21/05/2018
# EST-UEA
# Disciplina: AEDI
# Professora: Flávio José Mendes Coelho
# 1º Trabalho Prático (PP1)
# Problemática: Fazer um jogo em RPG.
*/

#include <iostream>
#include <stdio.h>

using namespace std;

template<typename T>
class No {
private:
    No<T> *proximo;
    T item;

public:
    No() {
        this->proximo = NULL;
    }

    T getItem() {
        return (this->item);
    }

    void setItem(T item) {
        this->item = item;
    }

    No<T> *getProximo() {
        return (this->proximo);
    }

    void setProximo(No<T> *proximo) {
        this->proximo = proximo;
    }
};

template<typename T>
class Pilha {
private:
    No<T> *topo;
    No<T> *fundo;
    int tamanho;

public:
    Pilha() {
        this->topo = new No<T>;
        this->fundo = new No<T>;
        this->fundo->setProximo(NULL);
        this->topo = this->fundo;
        this->tamanho = 0;
    }

    void empilha(T item) {
        No<T> *aux = new No<T>;
        this->topo->setItem(item);
        aux->setProximo(this->topo);
        this->topo = aux;
        this->tamanho++;
    }

    bool vazia() {
        bool aux = (this->topo == this->fundo);
        if (aux) {
            return true;
        }
        return false;
    }

    T getTopo() {
        return (this->topo->getProximo()->getItem());
    }

    int getTamanho() {
        return (this->tamanho);
    }

    T desempilha() {
        T item;

        if (this->tamanho != 0) {
            No<T> *aux = new No<T>;
            aux = this->topo;
            this->topo = this->topo->getProximo();
            item = this->topo->getItem();
            delete aux;
            this->tamanho--;
        } else {
            this->topo = new No<T>;
            this->fundo = new No<T>;
            this->fundo->setProximo(NULL);
            this->topo = this->fundo;
            this->tamanho = 0;
        }
        return (item);
    }
};

template<typename T>
class Fila {
private:
    No<T> *frente;
    No<T> *tras;

public:
    Fila() {
        this->frente = new No<T>;
        this->frente->setProximo(NULL);
        this->tras = this->frente;
    }

    void enfileira(T item) {
        this->tras->setProximo(new No<T>);
        this->tras = this->tras->getProximo();
        this->tras->setItem(item);
        this->tras->setProximo(NULL);
    }

    T desenfileira() {
        T item;
        No<T> *aux = new No<T>;
        aux = this->frente->getProximo();
        item = this->frente->getProximo()->getItem();
        this->frente->setProximo(this->frente->getProximo()->getProximo());
        delete aux;
        return (item);
    }

    bool vazia() {
        bool aux = (this->frente->getProximo() == this->tras->getProximo());
        if (aux) {
            return true;
        }
        return false;
    }
};

template<typename T>
class Lista {
private:
    int tamanho;
    No<T> *ultimo;
    No<T> *primeiro;

public:
    Lista() {
        this->ultimo = new No<T>;
        this->primeiro = new No<T>;
        this->primeiro->setProximo(ultimo);
        this->ultimo->setProximo(NULL);
        this->tamanho = 0;
    }

    No<T> *busca(int i) {
        int index = 1;
        No<T> *iterator = new No<T>;
        for (iterator = this->primeiro->getProximo(); iterator != this->ultimo; iterator = iterator->getProximo()) {
            if (index == i) {
                break;
            }
            index++;
        }
        return (iterator);
    }

    int getTamanho() {
        return (this->tamanho);
    }

    void insere(T item1) {
        No<T> *aux = new No<T>;
        this->ultimo->setItem(item1);
        this->ultimo->setProximo(aux);
        this->ultimo = aux;
        this->tamanho++;
    }
};

class Capturado {
private:
    string nome;
    string raca;
    unsigned long long int forca;

public:
    Capturado() {}

    Capturado(string nome, string raca, unsigned long long int forca) {
        this->nome = nome;
        this->raca = raca;
        this->forca = forca;
    }

    unsigned long long int getForca() {
        return (this->forca);
    }

    string getNome() {
        return (this->nome);
    }

    string getRaca() {
        return (this->raca);
    }
};

class Soldado {
private:
    string nome;
    string raca;
    unsigned long long int forca;
    Fila<Capturado> capturados;

public:
    Soldado() {}

    Soldado(string nome, string raca, unsigned long long int forca) {
        this->nome = nome;
        this->raca = raca;
        this->forca = forca;
        this->capturados = Fila<Capturado>();
    }

    string getNome() {
        return (this->nome);
    }

    string getRaca() {
        return (this->raca);
    }

    unsigned long long int getForca() {
        return (this->forca);
    }

    Fila<Capturado> getCapturados() {
        return (this->capturados);
    }

    void adicionarCapturado(Capturado capturado) {
        this->capturados.enfileira(capturado);
        this->forca += capturado.getForca();
    }

    Capturado removerCapturado() {
        Capturado capturado;
        if (!this->capturados.vazia()) {
            return (this->capturados.desenfileira());
        }
        return capturado;
    }
};

class Tropa {
private:
    unsigned long long int forca;
    Pilha<Soldado> tropa;

public:
    Tropa() {
        this->forca = 0;
        this->tropa = Pilha<Soldado>();
    }

    void adicionarSoldado(Soldado s) {
        Pilha<Soldado> aux = Pilha<Soldado>();
        setForca(this->forca += s.getForca());
        if (!tropa.vazia()) {
            while ((s.getForca() < tropa.getTopo().getForca()) && (!tropa.vazia())) {
                aux.empilha(this->tropa.desempilha());
                if (tropa.vazia()) {
                    break;
                }
            }
            tropa.empilha(s);
            while (!aux.vazia()) {
                tropa.empilha(aux.desempilha());
                if (aux.vazia()) {
                    break;
                }
            }
        } else {
            tropa.empilha(s);
        }
    }

    unsigned long long int getForca() {
        return (this->forca);
    }

    void setForca(unsigned long long int forca) {
        this->forca = forca;
    }

    Pilha<Soldado> getTropa() {
        return (this->tropa);
    }

    void setTropa(Pilha<Soldado> tropa) {
        this->tropa = tropa;
    }

    Soldado removerSoldado() {
        this->forca -= this->tropa.getTopo().getForca();
        return (this->tropa.desempilha());
    }
};

class Auxiliar {
public:
    Tropa ordenaTropa(Tropa a, Tropa b) {
        Pilha<Soldado> aux1, aux2, ordenada;
        Tropa novaTropa = Tropa();

        novaTropa.setForca(a.getForca() + b.getForca());
        while (!a.getTropa().vazia()) {
            aux1.empilha(a.removerSoldado());
        }
        while (!b.getTropa().vazia()) {
            aux2.empilha(b.removerSoldado());
        }
        while ((!aux1.vazia()) || (!aux2.vazia())) {
            bool d1 = true;
            bool d2 = true;

            if (aux1.vazia()) {
                d1 = false;
            }
            if (aux2.vazia()) {
                d2 = false;
            }
            if (d1 && d2) {
                if (aux1.getTopo().getForca() < aux2.getTopo().getForca()) {
                    ordenada.empilha(aux1.desempilha());
                } else {
                    ordenada.empilha(aux2.desempilha());
                }
            } else {
                if (!d2) {
                    while (!aux1.vazia()) {
                        ordenada.empilha(aux1.desempilha());
                    }
                } else {
                    while (!aux2.vazia()) {
                        ordenada.empilha(aux2.desempilha());
                    }
                }
            }
        }
        novaTropa.setTropa(ordenada);
        return (novaTropa);
    }

    bool comparaStrings(string a, string b) {
        int i = 0;
        int tamA = a.size();
        int tamB = b.size();
        if (tamA != tamB) {
            return false;
        } else {
            for (i = 0; i < tamA; ++i) {
                if (a[i] != b[i]) {
                    return false;
                }
            }
        }
        return true;
    }

    string concatena(Soldado soldado) {
        string nomeRaca;
        int tamanho = soldado.getNome().size();
        for (int i = 0; i < tamanho; i++) {
            nomeRaca += tolower(soldado.getNome()[i]);
        }
        int tamanho2 = soldado.getRaca().size();
        for (int i = 0; i < tamanho2; i++) {
            nomeRaca += tolower(soldado.getRaca()[i]);
        }
        return (nomeRaca);
    }

    unsigned long long int expMod(const unsigned long long int x, const int k, const int mod) {
        unsigned long long int resposta = 1;

        if (k == 0) {
            return resposta;
        } else {
            for (int i = 0; i < k; i++) {
                resposta = (((resposta % mod) * (x % mod)) % mod);
            }
        }
        return (resposta);
    }
};

class Santuario {
private:
    Lista<Capturado> santuario[43];
    Auxiliar ferramenta;
public:
    Santuario() {}
    float buscaNoSantuario(Soldado soldado) {
        const int base = 31;
        const int mod = 43;
        float forcaSantuario = 0;
        string nomeRaca = ferramenta.concatena(soldado);
        unsigned long long int hash = 0;
        int potencia = 0;
        for (int i = (nomeRaca.size() - 1); i >= 0; i--) {
            hash = ((hash % mod) + (((nomeRaca[i] % mod) * (ferramenta.expMod(base, potencia, mod))) % mod)) % mod;
            potencia++;
        }
        for (int i = 1; i <= this->santuario[hash].getTamanho(); i++) {
            forcaSantuario += this->santuario[hash].busca(i)->getItem().getForca();
        }
        return (forcaSantuario * 0.70);
    }
    void adicionarNoSantuario(Soldado soldado) {
        string nomeRaca = ferramenta.concatena(soldado);
        unsigned long long int hash = 0;
        const int base = 31;
        const int mod = 43;
        int potencia = 0;
        for (int i = (nomeRaca.size() - 1); i >= 0; i--) {
            hash = ((hash % mod) + (((nomeRaca[i] % mod) * (ferramenta.expMod(base, potencia, mod))) % mod)) % mod;
            potencia++;
        }
        Capturado capturado(soldado.getNome(), soldado.getRaca(), soldado.getForca());
        this->santuario[hash].insere(capturado);
    }
};

class CampoBatalha {
private:
    Tropa campo[10][10];
    unsigned long long int forca;
    int estado[10][10];
    Santuario santuario;
    unsigned long long int azuri, umashi, ianteco;
    unsigned long long int forcaAzuri, forcaUmashi, forcaIanteco;
    Auxiliar ferramenta;
public:
    CampoBatalha() {
        forca = azuri = umashi = ianteco = 0;
        forcaAzuri = forcaUmashi = forcaIanteco = 0;
        this->santuario = Santuario();
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                this->estado[i][j] = 0;
                campo[i][j] = Tropa();
            }
        }
    }
    void verificaSupremacia(const int x1, const int y1, const int x2, const int y2) {
        Soldado s1 = campo[x2][y2].getTropa().getTopo();
        string saida = "";
        string saida2 = "";
        if (ferramenta.comparaStrings(s1.getRaca(), "AZURI")) {
            this->azuri--;
            this->forcaAzuri -= s1.getForca();
            if (ferramenta.comparaStrings(campo[x1][y1].getTropa().getTopo().getRaca(), "UMASHI")) {
                this->forcaUmashi += s1.getForca();
            }
            if (ferramenta.comparaStrings(campo[x1][y1].getTropa().getTopo().getRaca(), "IANTECO")) {
                this->forcaIanteco += s1.getForca();
            }
            if (this->azuri == 0 && (this->umashi != 0 || this->ianteco != 0)) {
                saida = "AZURI foi eliminada";
            }
            if (this->azuri == 0 && this->umashi == 0) {
                saida2 = "IANTECO tem supremacia sobre Tau!";
            }
            if (this->azuri == 0 && this->ianteco == 0) {
                saida2 = "UMASHI tem supremacia sobre Tau!";
            }
        }
        if (ferramenta.comparaStrings(s1.getRaca(), "UMASHI")) {
            this->umashi--;
            this->forcaUmashi -= s1.getForca();
            if (ferramenta.comparaStrings(campo[x1][y1].getTropa().getTopo().getRaca(), "AZURI")) {
                this->forcaAzuri += s1.getForca();
            }
            if (ferramenta.comparaStrings(campo[x1][y1].getTropa().getTopo().getRaca(), "IANTECO")) {
                this->forcaIanteco += s1.getForca();
            }
            if (this->umashi == 0 && (this->azuri != 0 || this->ianteco != 0)) {
                saida = "UMASHI foi eliminada";
            }
            if (this->ianteco == 0 && this->umashi == 0) {
                saida2 = "AZURI tem supremacia sobre Tau!";
            }
            if (this->azuri == 0 && this->umashi == 0) {
                saida2 = "IANTECO tem supremacia sobre Tau!";
            }
        }
        if (ferramenta.comparaStrings(s1.getRaca(), "IANTECO")) {
            this->ianteco--;
            this->forcaIanteco -= s1.getForca();
            if (ferramenta.comparaStrings(campo[x1][y1].getTropa().getTopo().getRaca(), "AZURI")) {
                this->forcaAzuri += s1.getForca();
            }
            if (ferramenta.comparaStrings(campo[x1][y1].getTropa().getTopo().getRaca(), "UMASHI")) {
                this->forcaUmashi += s1.getForca();
            }
            if ((this->umashi != 0 || this->azuri != 0) && this->ianteco == 0) {
                saida = "IANTECO foi eliminada";
            }
            if (this->ianteco == 0 && this->umashi == 0) {
                saida2 = "AZURI tem supremacia sobre Tau!";
            }
            if (this->azuri == 0 && this->ianteco == 0) {
                saida2 = "UMASHI tem supremacia sobre Tau!";
            }
        }
        Capturado s2(s1.getNome(), s1.getRaca(), s1.getForca());
        Soldado soldado = campo[x1][y1].removerSoldado();
        soldado.adicionarCapturado(s2);
        campo[x1][y1].adicionarSoldado(soldado);
        campo[x2][y2].removerSoldado();
        if (campo[x2][y2].getTropa().getTamanho() == 0) {
            this->campo[x2][y2] = this->campo[x1][y1];
            this->estado[x2][y2] = this->estado[x1][y1];
            this->campo[x1][y1] = Tropa();
            this->estado[x1][y1] = 0;
            cout << "unidade " << this->campo[x2][y2].getTropa().getTopo().getNome() << "+"
                 << this->campo[x2][y2].getTropa().getTopo().getRaca() << " avanca para (" << x2 << ", " << y2 << ")"
                 << endl;
        }
        if (!saida.empty()) {
            cout << saida << endl;
        }
        if (!saida2.empty()) {
            cout << saida2 << endl;
        }
    }
    void mova(int x1, int y1, int x2, int y2) {
        if ((((abs(x1 - x2) == 3 && (y1 - y2) == 0) || (((x1 - x2) == 0 && abs(y1 - y2) == 3))) ||
             (((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) == 5)) &&
            ((x1 < 10 && x1 >= 0) && (y2 < 10 && y2 >= 0) && (y1 < 10 && y1 >= 0) && (x2 < 10 && x2 >= 0) &&
             (estado[x1][y1] != 0))) {
            if (!this->estado[x2][y2]) {
                this->campo[x2][y2] = this->campo[x1][y1];
                this->estado[x2][y2] = this->estado[x1][y1];
                this->campo[x1][y1] = Tropa();
                this->estado[x1][y1] = 0;
            } else if (this->campo[x1][y1].getTropa().getTopo().getRaca() ==
                       this->campo[x2][y2].getTropa().getTopo().getRaca()) {
                Tropa t1 = ferramenta.ordenaTropa(this->campo[x1][y1], this->campo[x2][y2]);
                this->campo[x2][y2] = t1;
                this->estado[x2][y2] = this->estado[x1][y1];
                this->campo[x1][y1] = Tropa();
                this->estado[x1][y1] = 0;
            } else {
                if (campo[x1][y1].getForca() > campo[x2][y2].getForca()) {
                    cout << "Ataque bem sucedido" << endl;
                    if (!campo[x2][y2].getTropa().getTopo().getCapturados().vazia()) {
                        Capturado s1 = campo[x2][y2].getTropa().getTopo().removerCapturado();
                        Soldado s2(s1.getNome(), s1.getRaca(), s1.getForca());
                        this->santuario.adicionarNoSantuario(s2);
                    } else {
                        verificaSupremacia(x1, y1, x2, y2);
                    }
                } else {
                    if ((3 * (campo[x1][y1].getForca())) <= (2 * (campo[x2][y2].getForca()))) {
                        float forcaTemporaria = santuario.buscaNoSantuario(campo[x1][y1].getTropa().getTopo());
                        if ((campo[x1][y1].getForca() + forcaTemporaria) > (campo[x2][y2].getForca())) {
                            cout << "Ataque bem sucedido" << endl;
                            if (!campo[x2][y2].getTropa().getTopo().getCapturados().vazia()) {
                                Capturado s1 = campo[x2][y2].getTropa().getTopo().removerCapturado();
                                Soldado s2(s1.getNome(), s1.getRaca(), s1.getForca());
                                this->santuario.adicionarNoSantuario(s2);
                            } else {
                                verificaSupremacia(x1, y1, x2, y2);
                            }
                        } else {
                            cout << "Contra-ataque!" << endl;
                            if (!campo[x1][y1].getTropa().getTopo().getCapturados().vazia()) {
                                Capturado s1 = campo[x1][y1].getTropa().getTopo().removerCapturado();
                                Soldado s2(s1.getNome(), s1.getRaca(), s1.getForca());
                                this->santuario.adicionarNoSantuario(s2);
                            } else {
                                verificaSupremacia(x2, y2, x1, y1);
                            }
                        }
                    }
                }
            }
        }
    }
    unsigned long long int getForcaAzuri() {
        return this->forcaAzuri;
    }
    unsigned long long int getForcaIanteco() {
        return this->forcaIanteco;
    }
    unsigned long long int getForcaUmashi() {
        return this->forcaUmashi;
    }
    void setTropaNoCampo(int x, int y, Soldado soldado1) {
        this->campo[x][y].adicionarSoldado(soldado1);
        if (ferramenta.comparaStrings(soldado1.getRaca(), "AZURI")) {
            this->azuri++;
            this->forcaAzuri += soldado1.getForca();
        }
        if (ferramenta.comparaStrings(soldado1.getRaca(), "UMASHI")) {
            this->umashi++;
            this->forcaUmashi += soldado1.getForca();
        }
        if (ferramenta.comparaStrings(soldado1.getRaca(), "IANTECO")) {
            this->ianteco++;
            this->forcaIanteco += soldado1.getForca();
        }
        if (campo[x][y].getTropa().getTamanho() > 1) {
            this->estado[x][y] = 1;
        } else {
            if (campo[x][y].getTropa().getTamanho() == 1) {
                this->estado[x][y] = -1;
            }
        }
        this->forca += soldado1.getForca();
    }
    void inserirSantuario(Soldado s) {
        this->santuario.adicionarNoSantuario(s);
    }
    void maxAtaque(int x, int y) {
        int di[] = {0, 1, 2, 3, 2, 1, 0, -1, -2, -3, -2, -1}, dj[] = {3, 2, 1, 0, -1, -2, -3, -2, -1, 0, 1, 2};
        int verificacaoDeAlcance = 0;
        unsigned long long int maxForca = 0;
        for (int i = 0; i < 12; i++) {
            if (campo[x][y].getTropa().getTamanho() != 0) {
                if ((x + di[i] < 10) && (x + di[i] >= 0) && (y + dj[i] < 10) && (y + dj[i] >= 0) &&
                    (((x < 10) && (x >= 0) && (y < 10) && (y >= 0)))) {
                    if (campo[x + di[i]][y + dj[i]].getTropa().getTamanho() > 0) {
                        verificacaoDeAlcance = 1;
                        if (campo[x + di[i]][y + dj[i]].getTropa().getTopo().getRaca() !=
                            campo[x][y].getTropa().getTopo().getRaca()) {
                            if (campo[x][y].getForca() < campo[x + di[i]][y + dj[i]].getForca()) {
                                if (((3 * (campo[x][y].getForca())) <=
                                     (2 * (campo[x + di[i]][y + dj[i]].getForca())))) {
                                    if ((campo[x][y].getForca() +
                                         santuario.buscaNoSantuario(campo[x][y].getTropa().getTopo())) >
                                        campo[x + di[i]][y + dj[i]].getForca()) {
                                        if (campo[x + di[i]][y + dj[i]].getTropa().getTopo().getCapturados().vazia()) {
                                            if (maxForca <
                                                campo[x + di[i]][y + dj[i]].getTropa().getTopo().getForca()) {
                                                maxForca = campo[x + di[i]][y + dj[i]].getTropa().getTopo().getForca();
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (campo[x][y].getForca() > campo[x + di[i]][y + dj[i]].getForca()) {
                                    if (campo[x + di[i]][y + dj[i]].getTropa().getTopo().getCapturados().vazia()) {
                                        if (maxForca < campo[x + di[i]][y + dj[i]].getTropa().getTopo().getForca()) {
                                            maxForca = campo[x + di[i]][y + dj[i]].getTropa().getTopo().getForca();
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (verificacaoDeAlcance) {
            cout << maxForca + campo[x][y].getForca() << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    void getTerrXY(int x, int y) {
        if ((campo[x][y].getTropa().getTamanho() == 1) && ((x < 10) && (x >= 0) && (y < 10) && (y >= 0))) {
            cout << "[" << campo[x][y].getTropa().getTopo().getNome() << " "
                 << campo[x][y].getTropa().getTopo().getRaca() << " " << campo[x][y].getTropa().getTopo().getForca()
                 << "]" << endl;
        } else if ((campo[x][y].getTropa().getTamanho() > 1) && (x < 10) && (x >= 0) && (y < 10) && (y >= 0)) {
            cout << "[[" << campo[x][y].getTropa().getTopo().getNome() << " "
                 << campo[x][y].getTropa().getTopo().getRaca() << " " << campo[x][y].getForca() << "]]" << endl;
        } else {
            cout << "[ ]" << endl;
        }
    }
    void getForcaXY(int x, int y) {
        if (this->campo[x][y].getTropa().getTamanho() && ((x < 10) && (x >= 0) && (y < 10) && (y >= 0))) {
            cout << this->campo[x][y].getForca() << endl;
        } else {
            cout << "-1" << endl;
        }
    }
};

void startGame();
int main() 
{
    startGame();
    return (0);
}

void startGame() 
{
    Auxiliar ferramenta;
    string operacao = "UTA";
    CampoBatalha campoDeBatalha;
    do 
    {
        if (ferramenta.comparaStrings(operacao, "UTA")) 
        {
            string nomeSoldado, racaSoldado, n1, r1, op1;
            unsigned long long int x, y, forcaSoldado;
            string nomeCapturado, racaCapturado;
            unsigned long long int forcaCapturado = 0;
            cin >> nomeSoldado >> racaSoldado;
            cin >> x >> y >> forcaSoldado;
            Soldado soldado1(nomeSoldado, racaSoldado, forcaSoldado);
            while ((cin >> op1) && ((op1 != "UTA") && (op1 != "STO"))) 
            {
                nomeCapturado = op1;
                cin >> racaCapturado >> forcaCapturado;
                Capturado capturado1(nomeCapturado, racaCapturado, forcaCapturado);
                soldado1.adicionarCapturado(capturado1);
            }
            if (ferramenta.comparaStrings(op1, "STO")) 
            {
                operacao = "STO";
            }
            if (ferramenta.comparaStrings(op1, "UTA")) 
            {
                operacao = "UTA";
            }
            if ((x < 10) && (x >= 0) && (y < 10) && (y >= 0)) 
            {
                campoDeBatalha.setTropaNoCampo(x, y, soldado1);
            }
        }
        if (ferramenta.comparaStrings(operacao, "STO")) 
        {
            string nome2, raca2, op2;
            unsigned long long int forca2;

            while ((cin >> op2) && (op2 != "CMD")) 
            {
                nome2 = op2;
                cin >> raca2 >> forca2;
                Soldado soldado2(nome2, raca2, forca2);
                campoDeBatalha.inserirSantuario(soldado2);
            }
            if (ferramenta.comparaStrings(op2, "CMD")) 
            {
                operacao = "CMD";
            }
        }
        if (ferramenta.comparaStrings(operacao, "CMD")) 
        {
            string op3;
            while ((cin >> op3) && (op3 != "FIM")) 
            {
                if (ferramenta.comparaStrings(op3, "FORCA")) 
                {
                    int x, y;
                    cin >> x >> y;
                    campoDeBatalha.getForcaXY(x, y);
                }
                if (ferramenta.comparaStrings(op3, "MOVA")) 
                {
                    int x1, y1, x2, y2;

                    cin >> x1 >> y1 >> x2 >> y2;
                    campoDeBatalha.mova(x1, y1, x2, y2);
                }
                if (ferramenta.comparaStrings(op3, "MAX_ATAQUE")) 
                {
                    int x, y;
                    cin >> x >> y;
                    campoDeBatalha.maxAtaque(x, y);
                }
                if (ferramenta.comparaStrings(op3, "TERR")) 
                {
                    int x, y;
                    cin >> x >> y;
                    campoDeBatalha.getTerrXY(x, y);
                }
                if (ferramenta.comparaStrings(op3, "FORCA_RACA")) 
                {
                    string raca;
                    cin >> raca;
                    if (ferramenta.comparaStrings(raca, "UMASHI")) 
                    {
                        cout << campoDeBatalha.getForcaUmashi() << endl;
                    }
                    if (ferramenta.comparaStrings(raca, "IANTECO")) 
                    {
                        cout << campoDeBatalha.getForcaIanteco() << endl;
                    }
                    if (ferramenta.comparaStrings(raca, "AZURI")) 
                    {
                        cout << campoDeBatalha.getForcaAzuri() << endl;
                    }
                }
            }
            if (ferramenta.comparaStrings(op3, "FIM")) 
            {
                operacao = "FIM";
            }
        }
    } while (operacao != "FIM");
}