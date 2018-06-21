#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct candidato{
	char nome[255];
	float notaCG;
	float notaA;
	float notaCE;
	float notaL;
	float media;
	int clas;
} candidato;


float Media(float notaCG, float notaA, float notaCE, float notaL){
	float m;
	m=(notaCG + notaA + notaCE + notaL)/4;
	return m;
}

void lerCandidato(candidato *x,int QC){
	
	for(int i=0;i<QC;i++){
		scanf("%s", x[i].nome);
		scanf("%f %f %f %f", &x[i].notaCG, &x[i].notaA, &x[i].notaCE, &x[i].notaL);
		x[i].media = Media(x[i].notaCG,x[i].notaA,x[i].notaCE,x[i].notaL);
	}
}

void imprimeCandidato(candidato *x, int qc,int vagas){
	
	for(int i=0;i<qc;i++){
		if(x[i].clas<=vagas && x[i].media >=7){
			printf("%s %.2f %d %s\n", x[i].nome, x[i].media, x[i].clas, "Aprovado");
		}
		else if(x[i].media >=7){
			printf("%s %.2f %d %s\n", x[i].nome, x[i].media, x[i].clas, "Classificado");
		}
		else{
			printf("%s %.2f %d %s\n", x[i].nome, x[i].media, x[i].clas, "Desclassificado");
		}
	}
	
}

void ordenaNome(candidato *x, int qc){
	int i,j;
	candidato aux;
	
	


	for(i=1;i<qc;i++){
		aux=x[i];
		for(j=i;(j>0) && (strcmp(aux.nome, x[j-1].nome) < 0);j--){
				x[j]=x[j-1];			
		}	
		x[j] = aux;
	}
}

void ordenaMedia(candidato *x, int qc){
	int i,j;
	candidato aux;
	for(i=1;i<qc;i++){
		aux=x[i];
		for(j=i;(j>0) && (aux.media > x[j-1].media);j--){
			x[j]=x[j-1];			
		}	
		x[j]=aux;
	}
}

void classificacao(candidato *x, int qc){
	int i;	
	for(i=0;i<qc;i++){
			x[i].clas=i+1;
	}
}

int main(){
	int QV, QC;
	scanf("%d %d", &QV, &QC);
	candidato *x;
	
	x=(candidato*)malloc(QC*sizeof(candidato));
	
	
	lerCandidato(x,QC);	
	ordenaMedia(x,QC);	
	classificacao(x,QC);	
	ordenaNome(x,QC);
	imprimeCandidato(x,QC,QV);	
	
		

	return 0;
}
