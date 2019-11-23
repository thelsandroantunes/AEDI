/*
    Programa: Arvore Binaria de Busca (ABB)
    Autor: Thelsandro Antunes
    1ª Versao
    Concluida em: 23/11/2019
    Breve descricao do PROBLEMA:

					1. Escrever um código em C ou C++ onde:
					• Defina uma estrutura para manipular uma arvore binaria. OK
					• Defina as seguintes funções:
					- Função para inicializar uma arvore. OK
					- Função para inserir um novo elemento na arvore. 
							A função de inserir deve cumprir com as características 
							de uma arvore binaria de busca. OK
					- Contar e retornar o numero de nó que tem na arvore. OK
					- Listar os valores das chaves de cada nó da árvore. OK
					- Excluir um elemento da árvore. OK
					- Buscar uma elemento na árvore. OK
					
					2. Usar o código gerado em 1 para representar uma arvore binaria de busca de 15 números inteiros. OK
					
					3. Usar o código gerado em 1 para representar uma arvore binaria de busca com 7 alunos. Cada aluno tem um código, cpf, nome e turma. OK
					Nos exercícios 2 e 3 se devem usar todas as funções definidas em 1
					
					Podem usar como referencia a implementação mostrada nos slides ou qualquer outra.
					
					O exercício um (1) foi orientado na sala de aula na primeira aula.
					O trabalho é individual.
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
	
	return novoNo;
}

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

void exercicio01(){
	ARVORE a;
	inicializarArvore(&a);
	
	PACIENTE np;
	
	np.cod_pac = 13;
	np.nome = "prova";		
	adiciona2(&a, np);
	
	np.cod_pac = 23;	
	adiciona2(&a, np);
	
	np.cod_pac = 10;	
	adiciona2(&a, np);
	
	listarArvore(&a);
	
	NO* no_proc = new NO;
	no_proc = buscar(&a, 10);
	
	cout << "-----------------resultado da busca---------------" << endl;
	cout << "Endereco: " << no_proc  << endl;
	cout << "No esquerda: " << no_proc->esquerda << endl;
	cout << "No direita: " << no_proc->direita << endl;
	cout << "Codigo: " << no_proc->pac.cod_pac << endl;
	cout << "Nome: " << no_proc->pac.nome << endl;
}

void exercicio02(){
	ARVORE b;
	inicializarArvore(&b);
	
	PACIENTE quinze;
	
	quinze.cod_pac = 38;
	quinze.nome = "QUINZE";		
	adiciona2(&b, quinze);
	
	quinze.cod_pac = 27;
	adiciona2(&b, quinze);	
	quinze.cod_pac = 47;
	adiciona2(&b, quinze);
	quinze.cod_pac = 19;
	adiciona2(&b, quinze);
	quinze.cod_pac = 23;
	adiciona2(&b, quinze);
	quinze.cod_pac = 40;
	adiciona2(&b, quinze);
	quinze.cod_pac = 53;
	adiciona2(&b, quinze);
	quinze.cod_pac = 15;
	adiciona2(&b, quinze);
	quinze.cod_pac = 20;
	adiciona2(&b, quinze);
	quinze.cod_pac = 50;
	adiciona2(&b, quinze);
	quinze.cod_pac = 9;
	adiciona2(&b, quinze);
	quinze.cod_pac = 45;
	adiciona2(&b, quinze);
	quinze.cod_pac = 63;
	adiciona2(&b, quinze);
	quinze.cod_pac = 12;
	adiciona2(&b, quinze);
	quinze.cod_pac = 55;
	adiciona2(&b, quinze);
	listarArvore(&b);
}

void exercicio03(){
	ARVORE c;
	inicializarArvore(&c);
	
	PACIENTE alunos;
	
	alunos.cod_pac = 9;
	alunos.nome = "lucas";		
	alunos.cpf = 9999;
	alunos.turma = 11;
	adiciona2(&c, alunos);
	
	alunos.cod_pac = 12;
	alunos.nome = "matheus";		
	alunos.cpf = 9998;
	alunos.turma = 11;
	adiciona2(&c, alunos);	
	
	alunos.cod_pac = 5;
	alunos.nome = "maria";		
	alunos.cpf = 9996;
	alunos.turma = 11;
	adiciona2(&c, alunos);	
	
	alunos.cod_pac = 15;
	alunos.nome = "camila";		
	alunos.cpf = 9993;
	alunos.turma = 11;
	adiciona2(&c, alunos);	
	
	alunos.cod_pac = 7;
	alunos.nome = "samya";		
	alunos.cpf = 9992;
	alunos.turma = 11;
	adiciona2(&c, alunos);	
	
	alunos.cod_pac = 11;
	alunos.nome = "matheus";		
	alunos.cpf = 9991;
	alunos.turma = 11;
	adiciona2(&c, alunos);	
	
	alunos.cod_pac = 3;
	alunos.nome = "julia";		
	alunos.cpf = 9997;
	alunos.turma = 11;
	adiciona2(&c, alunos);	
	
	listarArvore(&c);
}


int main(){
	
	//EX01
	exercicio01();
	
	//EX02
	exercicio02();
	
	//EX03
	exercicio03();
	
	
	return 0;
}
