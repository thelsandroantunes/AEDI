#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct registro{
	char *nome;
	float notas[4];	
	float notaFinal;
	int ranking;
	int ok;

}registro;


void lerDado(registro *dado){

	char vetor[80];
	
	fgets(vetor,80,stdin);

	vetor[strcspn(vetor,"\n")] = 0;
	
		
	dado->nome = (char*)malloc(80 * sizeof(char));


	strcpy(dado->nome, vetor);

	float nFinal(float *notas){
		
		return 	(dado->notas[0] + dado->notas[1] + dado->notas[2] + dado->notas[3])/4;
	}
	
	scanf("%f %f %f %f", &dado->notas[0], &dado->notas[1],&dado->notas[2],&dado->notas[3]);
	
	dado->notaFinal = nFinal(dado->notas);
	dado->ranking = 0;

	if(dado->notaFinal >= 7.00){
		dado->ok = 1;
	}else{
		dado->ok=0;
	}

	
}


void ordenacaoPorNome(registro *dado, int tamanho){
	
	int i,j;
	registro aux;

	for(i=1;i<tamanho;i++){
		aux = dado[i];
		for( j=i;(j>0) && (strcmp(aux.nome,dado[j-1].nome)<0);j--){
			dado[j] = dado[j-1];
		}
		dado[j] = aux;
	}	

}

void ordenacaoPorNotaFinalDec(registro *dado, int tamanho){
	
	int i,j;
	registro aux;

	for(i=1;i<tamanho;i++){
		aux = dado[i];
		for(j=i;(j>0) && (aux.notaFinal > dado[j-1].notaFinal);j--){
			dado[j] = dado[j-1];
		}
		dado[j] = aux;
	}
	
}

void imprimeDado(registro *dado, int n){
	
	printf("%s",dado->nome);
	printf(" %.2f %d ", dado->notaFinal, dado->ranking);
	if(dado->ranking <= n){
		printf("Aprovado\n");
	}else{
		if(dado->ok == 1){
			printf("Classificado\n");
		}else{
			printf("Desclassificado\n");
		}
	}

}

int main(){

	int n,c;

	registro *dado;
	scanf("%d %d",&n,&c);
	
	dado = (registro*)malloc(c*sizeof(registro));
	
	
	for(int i=0;i<c;i++){
		getchar();
		lerDado(&dado[i]);
	}
	
	
	ordenacaoPorNotaFinalDec(dado,c);
	
	for(int k=0;k<c;k++){
		dado[k].ranking = k+1;
	}	

	
	ordenacaoPorNome(dado,c);
	
	
	for(int k=0;k<c;k++){
		imprimeDado(&dado[k],n);
	}


	return 0;
}
