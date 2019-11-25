/*
    Programa: Arvore AVL - implementação
    Autor: Thelsandro Antunes
    1ª Versao
    Concluida em: 25/11/2019
    Breve descricao do PROBLEMA:
					1. Implemente as três formas que existem de percorrer uma árvore.
						Mostrar numa janela o resultado de percorres uma árvore com os três métodos.
					2. Faça o código para trabalhar com árvores AVL (inserir um nó, implementar as rotações esquerda, direita, esquerda-direita, direita-esquerda)
					Testar o código com vários exemplos
*/

#include <iostream>
using namespace std;

typedef struct {
	int cod_pac;
	string nome;
	int cpf;	
	int turma;
}PACIENTE;

typedef struct aux{
	PACIENTE pac;
	aux* esquerda;
	aux* direita;
	int h;
}NO;

typedef struct {
	NO* raiz;
}ARVORE;

void inicializarArvore(ARVORE* a){
	a->raiz = NULL;
}

NO* criarNo (PACIENTE p){
	NO* novoNo = new NO;
	novoNo->pac = p;
	novoNo->esquerda = NULL;
	novoNo->direita = NULL;
	
	return (novoNo);
}

int altura(NO* raiz){
	if(!raiz) return (-1);
	else return (raiz->h);
}

int maximo(int v1, int v2){
	if (v1 > v2) return v1;
	else return v2;
}

NO* rot_direita(NO* no_desb){
	NO* aux;
	aux = no_desb->esquerda;
	no_desb->esquerda = aux->direita;
	aux->direita = no_desb;
	
	no_desb->h = maximo(altura(no_desb->direita),altura(no_desb->esquerda)) + 1;
	
	aux->h = maximo(altura(aux->esquerda), altura(no_desb)) + 1;
	
	return (aux);
}

NO* rot_esquerda(NO* no_desb){
	NO* aux;
	aux = no_desb->direita;
	no_desb->direita = aux->esquerda;
	aux->esquerda = no_desb;
	
	no_desb->h = maximo(altura(no_desb->direita),altura(no_desb->esquerda)) + 1;
	
	aux->h = maximo(altura(aux->direita), altura(no_desb)) + 1;
	
	return (aux);
}

NO* rot_esq_direita(NO* no_desb){
	no_desb->esquerda = rot_esquerda(no_desb->esquerda);
	return (rot_direita(no_desb));
}

NO* rot_dir_esquerda(NO* no_desb){
	no_desb->direita = rot_direita(no_desb->direita);
	return (rot_esquerda(no_desb));
}

NO* inserirAVL(NO* raiz, NO* no){
	if(raiz == NULL) return (no);
	if(raiz->pac.cod_pac > no->pac.cod_pac){
		raiz->esquerda = inserirAVL(raiz->esquerda, no);
		if((altura(raiz->direita) - altura(raiz->esquerda)) == 2){
			if(no->pac.cod_pac < raiz->esquerda->pac.cod_pac) raiz = rot_direita(raiz);
			else raiz = rot_esq_direita(raiz);
		}
	}else if(raiz->pac.cod_pac < no->pac.cod_pac){
		raiz->direita = inserirAVL(raiz->direita, no);
		if((altura(raiz->direita) - altura(raiz->esquerda)) == 2){
			if(no->pac.cod_pac > raiz->direita->pac.cod_pac) raiz = rot_esquerda(raiz);
			else raiz = rot_dir_esquerda(raiz);
		}
	}
	
	raiz->h = maximo(altura(raiz->esquerda), altura(raiz->direita)) + 1;
	return (raiz);
}

bool adicionaAVL(ARVORE* a, PACIENTE p){
	NO* novoNo = new NO;
	novoNo->pac = p;
	novoNo->h = 0;
	novoNo->esquerda = NULL;
	novoNo->direita = NULL;
	a->raiz = inserirAVL(a->raiz, novoNo);
	
	return true;
}

void per_pre_ordem(NO* raiz){
	if(!raiz) return;
	cout << raiz->pac.cod_pac << endl;
	per_pre_ordem(raiz->esquerda);
	per_pre_ordem(raiz->direita);
}

void per_in_ordem(NO* raiz){
	if(!raiz) return;
	per_in_ordem(raiz->esquerda);
	cout << raiz->pac.cod_pac << endl;
	per_in_ordem(raiz->direita);
}

void per_pos_ordem(NO* raiz){
	if(!raiz) return;
	per_pos_ordem(raiz->esquerda);
	per_pos_ordem(raiz->direita);
	cout << raiz->pac.cod_pac << endl;
}

//other functions
NO* inserir (NO* raiz, NO* no){
	if(raiz == NULL) return (no);
	if(raiz->pac.cod_pac > no->pac.cod_pac)
 			raiz->esquerda = inserir(raiz->esquerda, no);
 	else
 			raiz->direita = inserir(raiz->direita, no);
 			
 	return raiz;
}

bool adiciona(ARVORE* a, NO* novo){
	
	a->raiz = inserir(a->raiz, novo);
	
	return true;	
}

bool adiciona2(ARVORE* a, PACIENTE p){
	NO* novoNo = new NO;
	novoNo->pac = p;
	novoNo->esquerda = NULL;
	novoNo->direita = NULL;
	adiciona(a, novoNo);
	
	return true;
	
}

int numeroNOS(NO* raiz){
	if(!raiz) return 0;
	
	return (numeroNOS(raiz->esquerda)
					+1
					+numeroNOS(raiz->direita)
					);
}

void listarNOS(NO* raiz){
	if(raiz!=NULL){
		cout << "Endereco: " << raiz << endl;
		cout << "No esquerda: " << raiz->esquerda << endl;
		cout << "No direita: " << raiz->direita << endl;
		cout << "Codigo: " << raiz->pac.cod_pac << endl;
		cout << "Nome: " << raiz->pac.nome << endl;
		
		listarNOS(raiz->esquerda);
		listarNOS(raiz->direita);
		
	}
}

void listarArvore(ARVORE* a){
	listarNOS(a->raiz);
}

NO* buscaNo(NO* raiz, int codpc, NO** pai){
	NO* atual = raiz;
	*pai = NULL;
	
	cout << "Pai: " << pai << endl;
	while(atual){
		if(atual->pac.cod_pac == codpc) return atual;
		*pai = atual;
		if(codpc < atual->pac.cod_pac) atual = atual->esquerda;
		else atual = atual->direita;
	}
	
	return (NULL);
}

bool excluirNo(NO* raiz, int codpc){
	NO* no;
	NO* pai;
	NO* pai_do_nosub;
	NO* no_sub;
	no = buscaNo(raiz,codpc,&pai);
	if(no = NULL) return (false);
	if(!no->esquerda || !no->direita){
		if(!no->esquerda) no_sub = no->direita;
		else no_sub = no->esquerda;
	}else{
		pai_do_nosub = no;
		no_sub = no->esquerda;
		while(no_sub->direita){
			pai_do_nosub = no_sub;
			no_sub = no_sub->direita;
		}
		if(pai_do_nosub != no){
			pai_do_nosub->direita = no_sub->esquerda;
			no_sub->esquerda = no->esquerda;
		}
		no_sub->direita = no->direita;
	}
	
	if(!pai){
		delete(no);
		return true;
	}
	if(codpc < pai->pac.cod_pac) pai->esquerda = no_sub;
	else pai->direita = no_sub;
	delete(no);
	return true;
}

NO* contem (NO* raiz, int codpc){
	if(raiz == NULL) return (NULL);
	if(raiz->pac.cod_pac == codpc) return (raiz);
	if(raiz->pac.cod_pac > codpc) return (contem(raiz->esquerda, codpc));
	else return (contem(raiz->direita, codpc));
}

NO* buscar(ARVORE* a, int codpc){
	return contem(a->raiz, codpc);
}

int main(){
	
	ARVORE a;
	inicializarArvore(&a);
	PACIENTE np;
	
	np.cod_pac = 3;
	np.nome = "prova";		
	adicionaAVL(&a, np);
	
	np.cod_pac = 5;	
	adicionaAVL(&a, np);
	
	np.cod_pac = 9;	
	adicionaAVL(&a, np);
	
	np.cod_pac = 12;	
	adicionaAVL(&a, np);
	
	np.cod_pac = 14;	
	adicionaAVL(&a, np);
	
	np.cod_pac = 6;	
	adicionaAVL(&a, np);
	
	np.cod_pac = 7;	
	adicionaAVL(&a, np);
	
	np.cod_pac = 15;	
	adicionaAVL(&a, np);
	
	np.cod_pac = 10;	
	adicionaAVL(&a, np);
	
	np.cod_pac = 6;	
	adicionaAVL(&a, np);
	
	adicionaAVL(&a, np);
	cout<< "PRE-ORDEM" << endl;
	per_pre_ordem(a.raiz);
	cout << "IN-ORDEM" << endl;
	per_in_ordem(a.raiz);
	cout << "POS-ORDEM" << endl;
	per_pos_ordem(a.raiz);
	//listarArvore(&a);
	
	return 0;
}
